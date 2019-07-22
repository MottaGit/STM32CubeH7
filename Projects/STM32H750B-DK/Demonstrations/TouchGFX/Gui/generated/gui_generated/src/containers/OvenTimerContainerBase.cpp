/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/OvenTimerContainerBase.hpp>
#include "BitmapDatabase.hpp"

OvenTimerContainerBase::OvenTimerContainerBase() :
    updateItemCallback(this, &OvenTimerContainerBase::updateItemCallbackHandler)
{
    setWidth(480);
    setHeight(272);

    backgroundTimer.setXY(0, 0);
    backgroundTimer.setBitmap(Bitmap(BITMAP_BACKGROUND_BG_ID));

    scrollWheelHours.setPosition(98, 48, 128, 125);
    scrollWheelHours.setHorizontal(false);
    scrollWheelHours.setCircular(true);
    scrollWheelHours.setEasingEquation(EasingEquations::backEaseOut);
    scrollWheelHours.setSwipeAcceleration(15);
    scrollWheelHours.setDragAcceleration(10);
    scrollWheelHours.setNumberOfItems(24);
    scrollWheelHours.setSelectedItemOffset(42);
    scrollWheelHours.setSelectedItemExtraSize(0, 0);
    scrollWheelHours.setSelectedItemMargin(0, 0);
    scrollWheelHours.setDrawableSize(48, 0);
    scrollWheelHours.setDrawables(scrollWheelHoursListItems, updateItemCallback,
                              scrollWheelHoursSelectedListItems, updateItemCallback);
    scrollWheelHours.animateToItem(0, 0);

    scrollWheelMinutes.setPosition(254, 48, 128, 125);
    scrollWheelMinutes.setHorizontal(false);
    scrollWheelMinutes.setCircular(true);
    scrollWheelMinutes.setEasingEquation(EasingEquations::backEaseOut);
    scrollWheelMinutes.setSwipeAcceleration(15);
    scrollWheelMinutes.setDragAcceleration(10);
    scrollWheelMinutes.setNumberOfItems(60);
    scrollWheelMinutes.setSelectedItemOffset(42);
    scrollWheelMinutes.setSelectedItemExtraSize(0, 0);
    scrollWheelMinutes.setSelectedItemMargin(0, 0);
    scrollWheelMinutes.setDrawableSize(48, 0);
    scrollWheelMinutes.setDrawables(scrollWheelMinutesListItems, updateItemCallback,
                              scrollWheelMinutesSelectedListItems, updateItemCallback);
    scrollWheelMinutes.animateToItem(0, 0);

    imageHourSelectedItem.setXY(84, 83);
    imageHourSelectedItem.setBitmap(Bitmap(BITMAP_MAIN_TIMER_SELECT_ID));

    imageMinuteSelectedItem.setXY(240, 83);
    imageMinuteSelectedItem.setBitmap(Bitmap(BITMAP_MAIN_TIMER_SELECT_ID));

    imageGradientHour.setXY(92, 47);
    imageGradientHour.setBitmap(Bitmap(BITMAP_GRADIENT_TIMER_OVERLAY_ID));

    imageGradientMinutes.setXY(248, 47);
    imageGradientMinutes.setBitmap(Bitmap(BITMAP_GRADIENT_TIMER_OVERLAY_ID));

    add(backgroundTimer);
    add(scrollWheelHours);
    add(scrollWheelMinutes);
    add(imageHourSelectedItem);
    add(imageMinuteSelectedItem);
    add(imageGradientHour);
    add(imageGradientMinutes);
}

void OvenTimerContainerBase::initialize()
{
    scrollWheelHours.initialize();
    for (int i = 0; i < scrollWheelHoursListItems.getNumberOfDrawables(); i++)
    {
        scrollWheelHoursListItems[i].initialize();
    }
    for (int i = 0; i < scrollWheelHoursSelectedListItems.getNumberOfDrawables(); i++)
    {
        scrollWheelHoursSelectedListItems[i].initialize();
    }
    scrollWheelMinutes.initialize();
    for (int i = 0; i < scrollWheelMinutesListItems.getNumberOfDrawables(); i++)
    {
        scrollWheelMinutesListItems[i].initialize();
    }
    for (int i = 0; i < scrollWheelMinutesSelectedListItems.getNumberOfDrawables(); i++)
    {
        scrollWheelMinutesSelectedListItems[i].initialize();
    }	
}

void OvenTimerContainerBase::updateItemCallbackHandler(DrawableListItemsInterface* items, int16_t containerIndex, int16_t itemIndex)
{
    if (items == &scrollWheelHoursListItems)
    {
        Drawable* d = items->getDrawable(containerIndex);
        OvenTimerWheelElement* cc = (OvenTimerWheelElement*)d;
        scrollWheelHoursUpdateItem(*cc, itemIndex);
    }
    else if (items == &scrollWheelHoursSelectedListItems)
    {
        Drawable* d = items->getDrawable(containerIndex);
        OvenTimerWheelCenterElement* cc = (OvenTimerWheelCenterElement*)d;
        scrollWheelHoursUpdateCenterItem(*cc, itemIndex);
    }
    if (items == &scrollWheelMinutesListItems)
    {
        Drawable* d = items->getDrawable(containerIndex);
        OvenTimerWheelElement* cc = (OvenTimerWheelElement*)d;
        scrollWheelMinutesUpdateItem(*cc, itemIndex);
    }
    else if (items == &scrollWheelMinutesSelectedListItems)
    {
        Drawable* d = items->getDrawable(containerIndex);
        OvenTimerWheelCenterElement* cc = (OvenTimerWheelCenterElement*)d;
        scrollWheelMinutesUpdateCenterItem(*cc, itemIndex);
    }
}