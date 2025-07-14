ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ChCheek(3,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChCheek(3,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D140B06102_01_000");
MsgDisp("Kazama","............");
MsgDisp("主人公","｛風真＊＊｝, what's wrong?
You haven't touched your food at all...");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,2,1);
VoicePlay("D140B06102_03_000");
MsgDisp("Honda","Then, I'm not eating too.");
MsgDisp("主人公","Eh∋
Did something happen to you two?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("D140B06102_03_010");
MsgDisp("Honda","We're worried about you.");
MsgDisp("主人公","Why?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("D140B06102_01_010");
MsgDisp("Kazama","How much more are you going to make us
say... geez.");
MsgDisp("主人公","Umm...");
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,5,1);
VoicePlay("D140B06102_03_020");
MsgDisp("Honda","Ahh—, hey!
It's about you and Mii-kun!");
ChEye(1,2);
ChEyeOpenLevel(1,8);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("D140B06102_03_030");
MsgDisp("Honda","Hey, hey, are you two dating?");
MsgDisp("主人公","Eh∋");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("D140B06102_01_020");
MsgDisp("Kazama","Honda. Please. That's enough. There's no
point in clarifying it.");
MsgDisp("主人公","?");
MsgDisp("主人公","(I think I'm getting along well with
｛七ツ森＊｝ but...
everyone seems so worried?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
ChClose(3,0,0);
