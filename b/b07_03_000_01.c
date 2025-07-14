MsgDisp("主人公","What kind of TV shows do you like?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("B070300000_03_010");
MsgDisp("Honda","I like everything.");
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("B070300000_03_020");
MsgDisp("Honda","Ah, but I especially like shows about the
Big Bang and Earth's 4.6 billion year
history.");
MsgDisp("主人公","That sounds like ｛本多＊＊｝.
What about quiz shows?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3);
ChEyeOpenLevel(3,0);
VoicePlay("B070300000_03_030");
MsgDisp("Honda","I love them.
I feel like one of the participants always
waving their hands.");
MsgDisp("主人公","Hehe, that sounds like fun.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,2);
VoicePlay("B070300000_03_040");
MsgDisp("Honda","But my little sister gets angry.
She says it's boring watching it with me.");
MsgDisp("主人公","Ahh, I think I can understand her feelings
a little bit.");
ChEye(3,4);
ChMouth(3,1);
ChMotion(3,5);
VoicePlay("B070300000_03_050");
MsgDisp("Honda","Ehh! You too?
That makes me sad......");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4);
VoicePlay("B070300000_03_060");
MsgDisp("Honda","I mean, isn't it weird to stay quiet even
though you know the answer?");
MsgDisp("主人公","(Knowing so many things can make things
difficult, huh......)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
