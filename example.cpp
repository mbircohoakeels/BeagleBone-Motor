//
// Created by Michael Brookes on 11/06/2016.
/*
Copyright (C) 2016 Michael Brookes

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "Lib/Motors/DJI_2212/DJI_2212.h"

int main( ) {
    using namespace abIDevice;
    DJI_2212 *Motor1, *Motor2, *Motor3, *Motor4;

    /*
     * Sets up the motors but leaves them off until you initialise them.
     */
    Motor1 = new DJI_2212( iDeviceOverlay::PinBlocks::BLOCK_P9, iDeviceOverlay::PWMPins::PIN_42 );
    Motor2 = new DJI_2212( iDeviceOverlay::PinBlocks::BLOCK_P8, iDeviceOverlay::PWMPins::PIN_19 );
    Motor3 = new DJI_2212( iDeviceOverlay::PinBlocks::BLOCK_P9, iDeviceOverlay::PWMPins::PIN_14 );
    Motor4 = new DJI_2212( iDeviceOverlay::PinBlocks::BLOCK_P9, iDeviceOverlay::PWMPins::PIN_22 );

    sleep( 3 ); //Motors are about to start spinning

    /*
     * if( body members in the way ){
     *      3 seconds to move out of the way, quickly now.;
     * } :)
     */

    /*
     * This will start the motors - they will spin slowly at this default setting.
     */
    Motor1->Init( );
    Motor2->Init( );
    Motor3->Init( );
    Motor4->Init( );

    while( 1 ) {
        std::cout << "Motor1 Duty = " << Motor1->Get( Motors::Duty ) << std::endl;
        std::cout << "Motor2 Duty = " << Motor2->Get( Motors::Duty ) << std::endl;
        std::cout << "Motor3 Duty = " << Motor3->Get( Motors::Duty ) << std::endl;
        std::cout << "Motor4 Duty = " << Motor4->Get( Motors::Duty ) << std::endl;
        sleep( 1 );
    }
}