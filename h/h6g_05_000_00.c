BGOpen("ho000",0);
ChLayout(1);
MsgClose();
ChOpen(5,255,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("H6G0500000_05_000");
MsgDisp("Hiiragi","｛主人公｝.");
MsgDisp("主人公","Oh, ｛柊＊＊＊｝.
What is it?");
ChEye(5,4);
VoicePlay("H6G0500000_05_010");
MsgDisp("Hiiragi","I heard that you won an award in the
gardening club's competition.");
MsgDisp("主人公","...! You came here to congratulate me?");
ChMotion(5,3);
Wait(20,0);
ChEye(5,3);
VoicePlay("H6G0500000_05_020");
MsgDisp("Hiiragi","Yes, I practically flew here.");
ChEye(5,0);
ChMotion(5,4);
VoicePlay("H6G0500000_05_030");
MsgDisp("Hiiragi","I see that even plants can feel the
kindness that you possess.");
MsgDisp("主人公","That's...");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("H6G0500000_05_040");
MsgDisp("Hiiragi","Please, show me the plants that you've
grown next time.");
MsgDisp("主人公","Yes!");
MsgDisp("主人公","(I'm so happy.
｛柊＊＊＊｝ congratulated me!)");
MsgClose();
ScrFadeOut(0,0);
