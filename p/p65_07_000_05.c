MsgClose();
BGMPlay("BGM_FESTIVAL");
BGOpen("sc710",0);
ChOpen(7,254,0,2,0,-1,-1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(7);
VoicePlay("P650700005_07_000");
MsgDisp("Mikage","｛主人公｝,
Good work.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("P650700005_07_010");
MsgDisp("Mikage","If we're going to be tired anyway, 
let's make the customers happy.
Everyone was disappointed, you know?");
MsgDisp("主人公","Uuugh...
so it was a failure after all.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P650700005_07_020");
MsgDisp("Mikage","Well, don't make that face.
Both the vegetables and herbs
were grown well.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("P650700005_07_030");
MsgDisp("Mikage","With just a little more scheming, 
the evaluation will change drastically.");
MsgDisp("主人公","(Uugh, I should have tried harder...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
BGMStop();
