#include "download_payload_page.hpp"
#include "confirm_page.hpp"
#include "worker_page.hpp"
#include "download.hpp"
#include "utils.hpp"
#include "fs.hpp"

namespace i18n = brls::i18n;
using namespace i18n::literals;
DownloadPayloadPage::DownloadPayloadPage() : AppletFrame(true, true)
{
    this->setTitle("menus/payloads/dl_payloads"_i18n);
    list = new brls::List();
    label = new brls::Label(
        brls::LabelStyle::DESCRIPTION,
        "menus/payloads/select"_i18n + std::string(BOOTLOADER_PL_PATH) + "." ,
        true
    );
    list->addView(label);
    
    auto links =  download::getLinks(PAYLOAD_URL);
    if(links.size()){
        for (const auto& link : links){
            std::string url = link.second;
            std::string path = std::string(BOOTLOADER_PL_PATH) + link.first;
            std::string text("menus/common/download"_i18n + link.first + "menus/common/from"_i18n + url);
            listItem = new brls::ListItem(link.first);
            listItem->getClickEvent()->subscribe([&, text, url, path](brls::View* view) {
                fs::createTree(BOOTLOADER_PL_PATH);
                brls::StagedAppletFrame* stagedFrame = new brls::StagedAppletFrame();
                stagedFrame->setTitle("menus/tools/getting_payload"_i18n);
                stagedFrame->addStage(
                    new ConfirmPage(stagedFrame, text)
                );
                stagedFrame->addStage(
                    new WorkerPage(stagedFrame, "menus/common/downloading"_i18n, [url, path](){ download::downloadFile(url, path.c_str(), OFF); })
                );
                stagedFrame->addStage(
                    new ConfirmPage(stagedFrame, "menus/common/all_done"_i18n, true)
                );
                brls::Application::pushView(stagedFrame);
            });
            list->addView(listItem);
        }
    }
    else{
        notFound = new brls::Label(
            brls::LabelStyle::DESCRIPTION,
            "menus/payloads/not_found"_i18n,
            true
        );
        notFound->setHorizontalAlign(NVG_ALIGN_CENTER);
        list->addView(notFound);
        brls::ListItem* back = new brls::ListItem("menus/common/back"_i18n);
        back->getClickEvent()->subscribe([&](brls::View* view) {
            brls::Application::popView();
        });
    list->addView(back);
    }
    this->setContentView(list);
}