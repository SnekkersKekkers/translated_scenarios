ChLayout(1);
MsgClose();
ChOpen(3,255,4,4,0,#1,#1,0,0);
VoicePlay("G020320101_03_000");
MsgDisp("Honda","Hey. What do you think of me? Do you hate
me?");
MsgDisp("主人公","Ehhh∋ What brought this on all of a
sudden?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0);
VoicePlay("G020320101_03_010");
MsgDisp("Honda","Judging by your reaction, it seems like
you don't hate me.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,2);
ChEyeOpenLevel(3,0);
VoicePlay("G020320101_03_020");
MsgDisp("Honda","......This is troubling");
MsgDisp("主人公","Troubling?");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("G020320101_03_030");
MsgDisp("Honda","Yeah. If you hated me, I could just give
up.");
MsgDisp("主人公","Um, ｛本多＊＊｝......?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4);
VoicePlay("G020320101_03_040");
MsgDisp("Honda","But, now it seems like there's someone
else you like being around more than me.");
MsgDisp("主人公","............");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("G020320101_03_050");
MsgDisp("Honda","Sorry. I'm not blaming you. I just wanted
to confirm the facts.");
ChEye(3,0);
ChMouth(3,0);
VoicePlay("G020320101_03_060");
MsgDisp("Honda","Based on this situation, it seems there's
still room for exploration, huh.");
MsgDisp("主人公","Exploration......?");
ChMotion(3,1);
VoicePlay("G020320101_03_070");
MsgDisp("Honda","Yeah. The exploration of the changes of
the human heart.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("G020320101_03_080");
MsgDisp("Honda","What did I do that made your feelings
change?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,2);
VoicePlay("G020320101_03_090");
MsgDisp("Honda","On that note—— 
why am I so drawn to you?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
VoicePlay("G020320101_03_100");
MsgDisp("Honda","Isn't it fascinating how there are so many
things I don't understand about myself?");
MsgDisp("主人公","(I-Is that right?......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
