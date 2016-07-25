//

// This callback file is created for your convenience. You may add application
// code to this file. If you regenerate this file over a previous version, the
// previous version will be overwritten and any code you have added will be
// lost.

#include "app/framework/include/af.h"
#include "app/framework/plugin/price-server/price-server.h"





/** @brief Button Event
 *
 * This allows another module to get notification when a button is pressed and
 * released but the button joining plugin did not handle it. This callback is
 * NOT called in ISR context so there are no restrictions on what code can
 * execute.
 *
 * @param buttonNumber The button number that was pressed. Ver.: always
 * @param buttonPressDurationMs The length of time button was held down before
 * it was released. Ver.: always
 */
void emberAfPluginButtonJoiningButtonEventCallback(uint8_t buttonNumber,
                                                   uint32_t buttonPressDurationMs)
{
}


/** @brief Broadcast Sent
 *
 * This function is called when a new MTORR broadcast has been successfully
 * sent by the concentrator plugin.
 *
 */
void emberAfPluginConcentratorBroadcastSentCallback(void)
{
}


/** @brief Finished
 *
 * This callback is fired when the network-find plugin is finished with the
 * forming or joining process. The result of the operation will be returned in
 * the status parameter.
 *
 * @param status   Ver.: always
 */
void emberAfPluginNetworkFindFinishedCallback(EmberStatus status)
{
}

/** @brief Get Radio Power For Channel
 *
 * This callback is called by the framework when it is setting the radio power
 * during the discovery process. The framework will set the radio power
 * depending on what is returned by this callback.
 *
 * @param channel   Ver.: always
 */
int8_t emberAfPluginNetworkFindGetRadioPowerForChannelCallback(uint8_t channel)
{
  return EMBER_AF_PLUGIN_NETWORK_FIND_RADIO_TX_POWER;
}

/** @brief Join
 *
 * This callback is called by the plugin when a joinable network has been
 * found. If the application returns true, the plugin will attempt to join the
 * network. Otherwise, the plugin will ignore the network and continue
 * searching. Applications can use this callback to implement a network
 * blacklist.
 *
 * @param networkFound   Ver.: always
 * @param lqi   Ver.: always
 * @param rssi   Ver.: always
 */
bool emberAfPluginNetworkFindJoinCallback(EmberZigbeeNetwork *networkFound,
                                          uint8_t lqi,
                                          int8_t rssi)
{
  return true;
}

