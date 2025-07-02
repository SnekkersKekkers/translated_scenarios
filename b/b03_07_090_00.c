BGOpen("fp300",0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
MsgDispSksp(1,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B030709000_07_000");
MsgDisp("Mikage","Today's extra credit is at the botanical
garden. After this, everyone should be
joining the gardening club, right?");
SEPlay("EV_SE_GAYA_022",0.2,0.5);
VoicePlay("B030709000_38_000");
MsgDisp("Students","Whaaat?");
VoicePlay("B030709000_38_010");
MsgDisp("Students","Why would we do that? What the heck?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("B030709000_07_010");
MsgDisp("Mikage","Oh, seems like that was a bust.");
SEStop("EV_SE_GAYA_022",1);
MsgDisp("主人公","Hehe, looks like your plan failed.");
MsgDispSksp(0);
