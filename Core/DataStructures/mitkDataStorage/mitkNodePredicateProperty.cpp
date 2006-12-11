/*=========================================================================

Program:   Medical Imaging & Interaction Toolkit
Module:    $RCSfile$
Language:  C++
Date:      $Date$
Version:   $Revision$

Copyright (c) German Cancer Research Center, Division of Medical and
Biological Informatics. All rights reserved.
See MITKCopyright.txt or http://www.mitk.org/copyright.html for details.

This software is distributed WITHOUT ANY WARRANTY; without even
the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE.  See the above copyright notices for more information.

=========================================================================*/

#include "mitkNodePredicateProperty.h"




mitk::NodePredicateProperty::NodePredicateProperty(const char* propertyName, mitk::BaseProperty& p)
: NodePredicateBase(), m_ValidProperty(&p), m_ValidPropertyName(propertyName)
{
}

mitk::NodePredicateProperty::NodePredicateProperty(const char* propertyName)
: NodePredicateBase(), m_ValidProperty(NULL), m_ValidPropertyName(propertyName)
{
}

mitk::NodePredicateProperty::~NodePredicateProperty()
{
}


bool mitk::NodePredicateProperty::CheckNode(mitk::DataTreeNode* node) const
{
  if (node == NULL)
    throw 1;  // Insert Exception Handling here

  if (m_ValidPropertyName.size() == 0)
    throw 1;  // does it make sense to search a property without giving a name?

  // check, if any of the properties of node are equal to m_ValidProperty.
  if (m_ValidProperty == NULL)
    ; // search only for name
  else
    ; // search for name and property

  return true;
}
