/*
* Copyright (C) 2013 Nivis LLC.
* Email:   opensource@nivis.com
* Website: http://www.nivis.com
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, version 3 of the License.
* 
* Redistribution and use in source and binary forms must retain this
* copyright notice.

* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*/

#ifndef ALERTREPORT_H_
#define ALERTREPORT_H_

#include "Common/Objects/SequenceOfIndividualAlert.h"

namespace Isa100 {
namespace Common {
namespace Objects {

class AlertReport {
    public:
        SequenceOfIndividualAlert alerts;

    public:
        virtual ~AlertReport() {
        }

        void marshall(NE::Misc::Marshall::OutputStream& stream) {
            alerts.marshall(stream);
        }

        void unmarshall(NE::Misc::Marshall::InputStream& stream) {
            alerts.unmarshall(stream);
        }

        Isa100::Common::ServiceType::ServiceType serviceType() {
            return Common::ServiceType::alertReport;
        }
        ;
};

}
}
}

#endif /*ALERTREPORT_H_*/
