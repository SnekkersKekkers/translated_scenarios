MsgClose();
ChOpen(2,255,0,0,4,#1,#1,0,0);
VoicePlay("G020240000_02_000");
MsgDisp("Sassa","When I was a kid, I went camping with my
family.
We saw fireflies just like this.");
MsgDisp("主人公","That seems like a wonderful memory.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("G020240000_02_010");
MsgDisp("Sassa","Yeah, it left a strong impression.
Whenever I think of fireflies, that memory
comes to mind and has stuck with me.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G020240000_02_020");
MsgDisp("Sassa","That was until I came with you.");
MsgDisp("主人公","Eh?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("G020240000_02_030");
MsgDisp("Sassa","Seeing this view with you, that old memory
just faded away.
This is overwhelmingly beautiful.");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("G020240000_02_040");
MsgDisp("Sassa","Hey, have you ever seen so many colors?");
MsgDisp("主人公","his place is known for mysterious legends.
Maybe these fireflies are special?");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("G020240000_02_050");
MsgDisp("Sassa","That's right. In a special place, just the
two of us. It wouldn't be surprising if we
broke the all-time record for fireflies.");
MsgDisp("主人公","Firefly records?");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G020240000_02_060");
MsgDisp("Sassa","That's right, watching with you now is the
best.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("G020240000_02_070");
MsgDisp("Sassa","I hope I can update it every time I come
here.
Firefly record.");
MsgDisp("主人公","(Hehe, I would be happy if I could have
another wonderful memory with
｛颯砂＊＊｝.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
