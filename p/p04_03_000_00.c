ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
ScrFadeIn(0);
VoicePlay("P040300000_03_000");
MsgDisp("Honda","Yeah yeah,
the dango and mitarashi paste
are the best!");
MsgDisp("主人公","Really?　I'm glad.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("P040300000_03_010");
MsgDisp("Honda","I'm sad that I finished it all.");
MsgDisp("主人公","Hehe, will you get seconds?");
ChSet(3,3,1);
VoicePlay("P040300000_03_020");
MsgDisp("Honda","Can I?
Then, another three sets, please.");
MsgDisp("主人公","Three sets∋
Can you eat that much?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("P040300000_03_030");
MsgDisp("Honda","I'll be fine!
I'd like to order even more, but
I'll save some for the others.");
MsgDisp("主人公","(I'm worried about ｛本多＊＊｝'s
stomach......
But, I'm glad he seems happy!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
