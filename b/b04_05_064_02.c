BGOpen("wf700",2);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040506402_05_000");
MsgDisp("Hiiragi","Our home field.
The hometown festival.");
MsgDisp("主人公","Yeah.
Habataki City is now completely your 
home town, isn't it, ｛柊＊＊＊｝?");
ChEye(5,3);
ChMouth(5,3);
ChMotion(5,3);
VoicePlay("B040506402_05_010");
MsgDisp("Hiiragi","As I serve as the leader 
as the local theatre troupe.");
VoicePlay("B040506402_36_000");
MsgDisp("Night Market Clerk","Yo, Chairman?
How's about some takoyaki?");
ChMotion(5,4);
VoicePlay("B040506402_05_020");
MsgDisp("Hiiragi","Ah, yes.
Of course I'll have some.");
VoicePlay("B040506402_47_000");
MsgDisp("Night Market Clerk","I saw the Habtaki theatre troupe 
the other day, you know?
I'll give you a free portion of yakisoba.");
ChEye(5,4);
ChMouth(5,4);
VoicePlay("B040506402_05_030");
MsgDisp("Hiiragi","Thank you very much.");
VoicePlay("B040506402_47_010");
MsgDisp("Night Market Clerk","Chairman, you don't hold back, huh.
Alright～!");
ChEye(5,0);
ChMouth(5,2);
ChMotion(5,0);
VoicePlay("B040506402_05_040");
MsgDisp("Hiiragi","Huh?
Would it have been better 
if I refused at least once?");
MsgDisp("主人公","You have to accept a favor.");
ChEye(5,3);
ChMouth(5,3);
VoicePlay("B040506402_05_050");
MsgDisp("Hiiragi","That's right. I accept it.");
MsgClose();
SEPlay("EV_SE_626");
ChClose(5);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
SEPlay("EV_SE_022",1);
MsgClose();
ChOpen(5,33,4,0,4,-1,-1,0,0);
ChEye(5,2);
ChMouth(5,2);
ChEyeOpenLevel(5,9);
VoicePlay("B040506402_05_060");
MsgDisp("Hiiragi","Uh...");
MsgDisp("主人公","Eh?
｛柊＊＊＊｝, what's wrong?");
ChMouth(5,4);
ChMotion(5,2);
ChEyeOpenLevel(5,0);
VoicePlay("B040506402_05_070");
MsgDisp("Hiiragi","Haaー
I'm alright.
I'm happy about everyone's feelings...");
MsgDisp("主人公","｛柊＊＊＊｝...
That's good.");
ChMotion(5,0);
ChEyeOpenLevel(5,-1);
VoicePlay("B040506402_05_080");
MsgDisp("Hiiragi","Yes...");
ChEye(5,4);
ChMotion(5,4);
VoicePlay("B040506402_05_090");
MsgDisp("Hiiragi","Haa, I was fine until 
I saw your face, but...");
ChEye(5,3);
ChMouth(5,3);
ChMotion(5,0);
VoicePlay("B040506402_05_100");
MsgDisp("Hiiragi","Look, the fireworks display.
It's starting now.
Let's go!");
MsgDisp("主人公","Y-Yeah.");
MsgDisp("主人公","(｛柊＊＊＊｝, you've been recognized by
the people of Habataki City. That's good.)");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(5,0,0);
