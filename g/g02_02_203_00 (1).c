MsgClose();
ChOpen(2,255,2,0,0,#1,#1,0,0);
VoicePlay("G020220300_02_000");
MsgDisp("Sassa","When you look at how fast they fly,
they're pretty all over the place.");
MsgDisp("主人公","Yeah, there are slow ones and fast ones.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G020220300_02_010");
MsgDisp("Sassa","If you were a firefly, which would you
prefer?");
MsgDisp("主人公","Huh?
If I were a firefly?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G020220300_02_020");
MsgDisp("Sassa","Yeah, a girl firefly.");
MsgDisp("主人公","Mm...in that case, then I guess one
that's slow and floaty?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,5);
VoicePlay("G020220300_02_030");
MsgDisp("Sassa","Seriously?
But that's... just how Firefly You feels,
right?");
MsgDisp("主人公","Oh, probably.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("G020220300_02_040");
MsgDisp("Sassa","Hahah, Firefly Me can fly any kind of way.");
MsgDisp("主人公","So now we're talking about you as a
firefly, ｛颯砂＊＊｝?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("G020220300_02_050");
MsgDisp("Sassa","Yep.
Firefly Me would fly around you, flying
the way that'd make you fall in love.");
MsgDisp("主人公","Hahah, sounds like I'd get dizzy.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G020220300_02_060");
MsgDisp("Sassa","Anyway, I figure that's one tactic.");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,2);
ChEyeOpenLevel(2,7);
VoicePlay("G020220300_02_070");
MsgDisp("Sassa","(sigh) I bet it'd be easier to be your
partner if we were fireflies...");
MsgDisp("主人公","(What is ｛颯砂＊＊｝ talking
about...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
