ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(6,254,3,0,0,-1,-1,0,0);
VoicePlay("P840600002_06_000");
MsgDisp("Himuro","Amazing.
That was excellent.");
MsgDisp("主人公","Well, if you don't deal with it 
one after the other, it'll all pile up.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,3);
VoicePlay("P840600002_06_010");
MsgDisp("Himuro","You don't get mixed up?");
MsgDisp("主人公","I don't.
I secretly make a memo of it.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("P840600002_06_020");
MsgDisp("Himuro","As expected.");
MsgDisp("主人公","By the way, ｛氷室＊＊｝,
I gave you another chair right?
IS it still not ");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("P840600002_06_030");
MsgDisp("Himuro","No, it's enough.
I was just fascinated by your movements.");
MsgDisp("主人公","Eh!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("P840600002_06_040");
MsgDisp("Himuro","Then, keep up the good work.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(6,0,0);
Wait(30);
MsgDisp("主人公","(｛氷室＊＊｝ appreciated me! Alrーight,
let's do our best until the end.)");
MsgClose();
ScrFadeOut(0,0);
