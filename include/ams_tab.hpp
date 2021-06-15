#pragma once

#include <borealis.hpp>

class AmsTab : public brls::List
{
    private:
        brls::ListItem* listItem;
        brls::Label *notFound;
        brls::Label *description;
        int size;
    public:
        AmsTab();
        brls::View* getDefaultFocus() override;
};