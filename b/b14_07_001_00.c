MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_XMAS_TRHEE",0.01);
BGOpen("ex290",2);
ChLayout(1);
ChEye(7,4);
ChMouth(7,0);
ChMotion(7,0,1);
Wait(40,0);
ScrFadeIn(0);
MsgDisp("主人公","Waa!
There's so many lights, it's so pretty!");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
ChEyeOpenLevel(7,8);
VoicePlay("B140700100_07_000");
MsgDisp("Mikage","Yeah, just like you yesterday.");
MsgDisp("主人公","Hehe, thank you very much.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
ChEyeOpenLevel(7,10);
VoicePlay("B140700100_07_010");
MsgDisp("Mikage","You seem to be brushing it off so
casually.");
MsgDisp("主人公","That's not true.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B140700100_07_020");
MsgDisp("Mikage","Hmmph, aren't you composed?");
ChEye(7,1);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("B140700100_07_030");
MsgDisp("Mikage","Then, I'll turn things up.");
MsgDisp("主人公","Ehh?");
MsgClose();
ChClose(7,0,30);
SEPlay("EV_SE_544");
ChLayout(0);
ChEye(7,1);
ChOpen(7,255,0,0,0,#1,#1,0,0,0,30);
SEWait();
MsgDisp("主人公","Eh...
｛御影＊＊｝?");
ChEye(7,1);
ChMouth(7,4);
VoicePlay("B140700100_07_040");
MsgDisp("Mikage","......");
MsgDisp("主人公","Ah, the jacket!");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,0,1);
VoicePlay("B140700100_07_050");
MsgDisp("Mikage","Hm?");
MsgDisp("主人公","I forgot to return the jacket to
｛御影＊＊｝ yesterday...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
ChEyeOpenLevel(7,8);
VoicePlay("B140700100_07_060");
MsgDisp("Mikage","Heheh...
I see.");
MsgClose();
ScrFadeOut(0);
MsgDisp("主人公","?");
SEPlay("EV_SE_682");
MsgDisp("","(*PAT PAT*)");
ScrFadeIn(0);
MsgDisp("主人公","Ah...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B140700100_07_070");
MsgDisp("Mikage","You can return it next time.");
MsgDisp("主人公","(｛御影＊＊｝ patted my head...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
