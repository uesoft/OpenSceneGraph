// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Node>
#include <osg/NodeTrackerCallback>
#include <osg/NodeVisitor>
#include <osg/ObserverNodePath>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osg::NodeTrackerCallback)
	I_DeclaringFile("osg/NodeTrackerCallback");
	I_BaseType(osg::NodeCallback);
	I_Constructor0(____NodeTrackerCallback,
	               "",
	               "");
	I_Method1(void, setTrackNodePath, IN, const osg::NodePath &, nodePath,
	          Properties::NON_VIRTUAL,
	          __void__setTrackNodePath__C5_osg_NodePath_R1,
	          "",
	          "");
	I_Method1(void, setTrackNodePath, IN, const osg::ObserverNodePath &, nodePath,
	          Properties::NON_VIRTUAL,
	          __void__setTrackNodePath__C5_ObserverNodePath_R1,
	          "",
	          "");
	I_Method0(osg::ObserverNodePath &, getTrackNodePath,
	          Properties::NON_VIRTUAL,
	          __ObserverNodePath_R1__getTrackNodePath,
	          "",
	          "");
	I_Method1(void, setTrackNode, IN, osg::Node *, node,
	          Properties::NON_VIRTUAL,
	          __void__setTrackNode__osg_Node_P1,
	          "",
	          "");
	I_Method0(osg::Node *, getTrackNode,
	          Properties::NON_VIRTUAL,
	          __osg_Node_P1__getTrackNode,
	          "",
	          "");
	I_Method0(const osg::Node *, getTrackNode,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Node_P1__getTrackNode,
	          "",
	          "");
	I_Method1(void, update, IN, osg::Node &, node,
	          Properties::NON_VIRTUAL,
	          __void__update__osg_Node_R1,
	          "Update the node to track the nodepath. ",
	          "");
	I_SimpleProperty(osg::Node *, TrackNode, 
	                 __osg_Node_P1__getTrackNode, 
	                 __void__setTrackNode__osg_Node_P1);
	I_SimpleProperty(osg::ObserverNodePath &, TrackNodePath, 
	                 __ObserverNodePath_R1__getTrackNodePath, 
	                 0);
END_REFLECTOR
