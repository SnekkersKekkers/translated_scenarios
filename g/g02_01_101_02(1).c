MsgClose();
ChOpen(1,255,0,0,2,#1,#1,0,0);
VoicePlay("G020110102_01_000");
MsgDisp("Kazama","... Hey.
Were fireflies always this colorful?");
MsgDisp("主人公","Fireflies are just like people, they come
in many different colors.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020110102_01_010");
MsgDisp("Kazama","Yeah.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G020110102_01_020");
MsgDisp("Kazama","Lately, there have been some pretty
colorful characters around us too, right?");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,3);
VoicePlay("G020110102_01_030");
MsgDisp("Kazama","If Honda and Nanatsumori were fireflies,
they'd probably be glowing in rainbow
colors.");
MsgDisp("主人公","Hehe, what about ｛風真＊＊｝?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020110102_01_040");
MsgDisp("Kazama","I'd be orange.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
Wait(12,0);
VoicePlay("G020110102_01_050");
MsgDisp("Kazama","You know, it's a special color for us,
right?
Do you remember?");
MsgDisp("主人公","Yeah.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110102_01_060");
MsgDisp("Kazama","If I were a firefly, I'd fly straight to
you.
I don't need any flashy colors like them.");
ChMotion(1,0);
Wait(10,0);
ChEye(1,4);
ChMouth(1,3);
VoicePlay("G020110102_01_070");
MsgDisp("Kazama","No one can come between us.
This bond will never break, it's eternal.");
MsgDisp("主人公","(｛風真＊＊｝... are you worried about
｛本多＊＊｝ and
｛七ツ森＊｝? )");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
