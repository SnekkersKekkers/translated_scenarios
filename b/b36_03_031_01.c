MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B360303101_03_000");
MsgDisp("Honda","Hey, was I being pushy today?");
MsgDisp("主人公","Huh?
Why do you ask?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("B360303101_03_010");
MsgDisp("Honda","I thought I was pretty proactive, but it's
the first time I've directed that towards
a person.");
MsgDisp("主人公","So...does that mean...you're interested in
me?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B360303101_03_020");
MsgDisp("Honda","Yes!");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5,1);
VoicePlay("B360303101_03_030");
MsgDisp("Honda","Oh look, it's a sunfish!");
MsgDisp("主人公","Hehe.
You're interested in sunfish too?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("B360303101_03_040");
MsgDisp("Honda","...The way you said that makes it sound
like you and the sunfish are on the same
level. That's not it at all!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("B360303101_03_050");
MsgDisp("Honda","I am interested in sunfish, but I like you
even more!");
MsgDisp("主人公","(Uh...
I got compared to a sunfish...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ChCheek(3,0);
