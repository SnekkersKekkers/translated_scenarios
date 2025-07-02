MsgDisp("主人公","What kind of music does ｛本多＊＊｝
like?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("B070300000_03_190");
MsgDisp("Honda","I've never really thought about
that sort of thing.");
MsgDisp("主人公","You don't listen to music?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("B070300000_03_200");
MsgDisp("Honda","My sister often listens to songs by
idols. I can remember those. Maybe that
means I like those too?");
MsgDisp("主人公","Ehh, let me listen sometime.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("B070300000_03_210");
MsgDisp("Honda","Yes ma'am!
We should dance too, then.");
MsgDisp("主人公","Do you dance too?");
ChMotion(3,4);
VoicePlay("B070300000_03_220");
MsgDisp("Honda","Yepyep, it gets me moving.
My sister dislikes it. She calls it
\"Strange Dancing\".");
MsgDisp("主人公","Hehe, you two must be close.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,2);
VoicePlay("B070300000_03_230");
MsgDisp("Honda","We used to dance in front of the TV
together but lately I'm just dancing
solo.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("B070300000_03_240");
MsgDisp("Honda","Want to do it with me instead?");
MsgDisp("主人公","(Uhm......I can sort of understand his
sister's feelings......)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(3,-1);
ChMouthOpenLevel(3,-1);
ChCheek(3,0);
