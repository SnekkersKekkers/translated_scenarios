BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(That's right, I still have some time, so
I'll go return the book to the library.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("sc330",0);
ScrFadeIn(0);
VoicePlay("F100210001_46_000");
MsgDisp("Librarian","All in all, these are 20 books.");
VoicePlay("F100210001_02_000");
MsgDisp("Sassa?","I'm right on the mark this time.");
MsgDisp("主人公","Ah, it's you, ｛颯砂＊＊｝.");
BGMPlay("BGM_C02_SASSA_A",0.01);
MsgClose();
ChOpen(2,254,4,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛颯砂＊＊｝, You sure are borrowing lots.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F100210001_02_010");
MsgDisp("Sassa","Ohh, it's you.
Did you know?
The limit here is 20 books");
MsgDisp("主人公","Yeah. ｛颯砂＊＊｝, you borrowed 20 books
before. Are you a bookworm?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("F100210001_02_020");
MsgDisp("Sassa","Hm? It's not like that.");
MsgDisp("主人公","Eh?
But..");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,1);
VoicePlay("F100210001_02_030");
MsgDisp("Sassa","I keep it in my bag instead of dumbbells.
With this, I can train on the way to
school.");
MsgDisp("主人公","Ehhh∋");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
VoicePlay("F100210001_02_040");
MsgDisp("Sassa","It's just a brain game to me right?
See you then.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(2);
MsgDisp("主人公","(｛颯砂＊＊｝... You're using books the
wrong way.)");
MsgClose();
ScrFadeOut(0);
