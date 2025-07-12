BGOpen("ex300",2);
MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGMPlay("BGM_XMAS_TRHEE",0.01);
MsgClose();
ChOpen(3,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","It's so beautiful... Hey, ｛本多＊＊｝!");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B140300000_03_000");
MsgDisp("Honda","Yeah, it's amazing. Everyone's
surrounded by this blue light.");
MsgDisp("主人公","It really is. It feels like we're inside 
the deep blue sea.");
ChSet(3,3);
VoicePlay("B140300000_03_010");
MsgDisp("Honda","Yeah, and everyone's white breath looks 
like marine snow∈");
MsgDisp("主人公","It's lovely.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("B140300000_03_020");
MsgDisp("Honda","I'm so glad we came here! It was
definitely the right choice.");
MsgDisp("主人公","Oh? Why's that?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B140300000_03_030");
MsgDisp("Honda","Because I've been able to see your happy 
face two days in a row.");
MsgDisp("主人公","Oh, we've spent two days in a row with
each other!");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
ChEyeOpenLevel(3,0);
VoicePlay("B140300000_03_040");
MsgDisp("Honda","Hehe, Merry Christmas!");
MsgDisp("主人公","(Both yesterday and today, I spent with
｛本多＊＊｝. What a happy Christmas!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
