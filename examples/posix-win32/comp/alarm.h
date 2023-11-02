//$file${.::alarm.h} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
//
// Model: comp.qm
// File:  ${.::alarm.h}
//
// This code has been generated by QM 5.3.0 <www.state-machine.com/qm>.
// DO NOT EDIT THIS FILE MANUALLY. All your changes will be lost.
//
//
//                   Q u a n t u m  L e a P s
//                   ------------------------
//                   Modern Embedded Software
//
// SPDX-License-Identifier: GPL-3.0-or-later
//
// This generated code is open source software: you can redistribute it under
// the terms of the GNU General Public License as published by the Free
// Software Foundation.
//
// This code is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
// more details.
//
// NOTE:
// Alternatively, this generated code may be distributed under the terms
// of Quantum Leaps commercial licenses, which expressly supersede the GNU
// General Public License and are specifically designed for licensees
// interested in retaining the proprietary status of their code.
//
// Contact information:
// <www.state-machine.com/licensing>
// <info@state-machine.com>
//
//$endhead${.::alarm.h} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
#ifndef ALARM_H_
#define ALARM_H_

//$declare${Components::Alarm} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

//${Components::Alarm} .......................................................
typedef struct {
// protected:
    QHsm super;

// private:
    uint32_t alarm_time;
} Alarm;

// public:
void Alarm_ctor(Alarm * const me);

// protected:
QState Alarm_initial(Alarm * const me, void const * const par);
QState Alarm_off(Alarm * const me, QEvt const * const e);
QState Alarm_on(Alarm * const me, QEvt const * const e);
//$enddecl${Components::Alarm} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

//$declare${Components::Alarm::ctor} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
void Alarm_ctor(Alarm * const me);
//$enddecl${Components::Alarm::ctor} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

#endif // ALARM_H_