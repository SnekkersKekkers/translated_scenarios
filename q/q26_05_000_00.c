SEPlay("EV_SE_700");
BGOpen("sc815",2);
ChLayout(1);
MsgClose();
ChOpen(5,30,0,2,2,9,#1,0,0);
ScrFadeIn(0);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("Q260500000_05_000");
MsgDisp("Hiiragi","Ahh...");
ChEyeOpenLevel(5,9);
VoicePlay("Q260500000_05_010");
MsgDisp("Hiiragi","I knew it were you...");
MsgDisp("主人公","Eh, ｛柊＊＊＊｝∋
Wait, so just now...");
ChMouth(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("Q260500000_05_020");
MsgDisp("Hiiragi","E, excuse me.
I could not see——");
ChMouth(5,2);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
ChCheek(5,7);
VoicePlay("Q260500000_05_030");
MsgDisp("Hiiragi","So, I touched...
I'm sorry.");
MsgClose();
SEPlay("EV_SE_799");
ChClose(5);
SEWait();
MsgDisp("主人公","(Eeh∋
So the feeling right now was
｛柊＊＊＊｝...? )");
MsgClose();
ScrFadeOut(0,0);
