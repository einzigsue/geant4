//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
// -*- C++ -*-
// AID-GENERATED
// =========================================================================
// This class was generated by AID - Abstract Interface Definition          
// DO NOT MODIFY, but use the org.freehep.aid.Aid utility to regenerate it. 
// =========================================================================
#ifndef HEPREP_HEPREPWRITER_H
#define HEPREP_HEPREPWRITER_H 1

// Copyright 2002, Freehep.

namespace HEPREP {

class HepRep;
class HepRepAction;
class HepRepAttDef;
class HepRepAttValue;
class HepRepAttribute;
class HepRepDefinition;
class HepRepInstance;
class HepRepInstanceTree;
class HepRepPoint;
class HepRepTreeID;
class HepRepType;
class HepRepTypeTree;

/**
 * HepRepWriter interface.
 *
 * @author Mark Donszelmann
 */
class HepRepWriter {

public: 
    /// Destructor.
    virtual ~HepRepWriter() { /* nop */; }

    /**
     * Closes the writer and its underlying stream.
     *
     * @return false in case of a stream problem.
     */
    virtual bool close() = 0;

    /**
     * Writes a HepRep.
     *
     * @param heprep to be written.
     * @return false in case of a stream problem.
     */
    virtual bool write(HepRep * heprep) = 0;

    /**
     * Writes a HepRepTypeTree.
     *
     * @param typeTree to be written.
     * @return false in case of a stream problem.
     */
    virtual bool write(HepRepTypeTree * typeTree) = 0;

    /**
     * Writes a HepRepType.
     *
     * @param type to be written.
     * @return false in case of a stream problem.
     */
    virtual bool write(HepRepType * type) = 0;

    /**
     * Writes a HepRepTreeID.
     *
     * @param treeID to be written.
     * @return false in case of a stream problem.
     */
    virtual bool write(HepRepTreeID * treeID) = 0;

    /**
     * Writes a HepRepAction.
     *
     * @param action to be written.
     * @return false in case of a stream problem.
     */
    virtual bool write(HepRepAction * action) = 0;

    /**
     * Writes a HepRepInstanceTree.
     *
     * @param instanceTree to be written.
     * @return false in case of a stream problem.
     */
    virtual bool write(HepRepInstanceTree * instanceTree) = 0;

    /**
     * Writes a HepRepInstance.
     *
     * @param instance to be written.
     * @return false in case of a stream problem.
     */
    virtual bool write(HepRepInstance * instance) = 0;

    /**
     * Writes a HepRepPoint.
     *
     * @param point to be written.
     * @return false in case of a stream problem.
     */
    virtual bool write(HepRepPoint * point) = 0;

    /**
     * Writes a HepRepAttribute.
     *
     * @param attribute to be written.
     * @return false in case of a stream problem.
     */
    virtual bool write(HepRepAttribute * attribute) = 0;

    /**
     * Writes a HepRepDefinition.
     *
     * @param definition to be written.
     * @return false in case of a stream problem.
     */
    virtual bool write(HepRepDefinition * definition) = 0;

    /**
     * Writes a HepRepAttValue.
     *
     * @param attValue to be written.
     * @return false in case of a stream problem.
     */
    virtual bool write(HepRepAttValue * attValue) = 0;

    /**
     * Writes a HepRepAttDef.
     *
     * @param attDef to be written.
     * @return false in case of a stream problem.
     */
    virtual bool write(HepRepAttDef * attDef) = 0;
}; // class
}; // namespace HEPREP
#endif /* ifndef HEPREP_HEPREPWRITER_H */