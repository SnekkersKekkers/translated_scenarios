BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(That's right, I still have some down
time, so maybe I'll go to the library...?)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("sc330",0);
ScrFadeIn(0);
VoicePlay("F100210000_46_000");
MsgDisp("Librarian","I'm very sorry.
Each person has a limit of 20 books, you
have 2 too many.");
VoicePlay("F100210000_02_000");
MsgDisp("Sassa?","Ah, I see.
Sorry.
I'll put two back.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
SEWait();
MsgDisp("主人公","(Wow...there's someone borrowing 20
books.)");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
BGMPlay("BGM_C02_SASSA_A",0.01);
MsgClose();
ChOpen(2,254,0,0,4,#1,#1,0,0);
VoicePlay("F100210000_02_010");
MsgDisp("Sassa","Yo, are you borrowing a book too?");
MsgDisp("主人公","Yeah.
...You too, ｛颯砂＊＊｝?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,7);
VoicePlay("F100210000_02_020");
MsgDisp("Sassa","Yeah.
Just now, you made a face like \"Wow,
that's pretty unusual\", didn't you?");
MsgDisp("主人公","T-That's not true.
What kinda books are you borrowing?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("F100210000_02_030");
MsgDisp("Sassa","I returned them just now.
What about you?");
MsgDisp("主人公","I was thinking of borrowing one at the top
of the popularity rankings.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F100210000_02_040");
MsgDisp("Sassa","Nice.
Since they're popular, you need to hurry
or someone else will borrow it.");
MsgDisp("主人公","Yeah!");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F100210000_02_050");
MsgDisp("Sassa","See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(2);
VoicePlay("F100210000_02_060");
MsgDisp("Sassa","I've returned two books, so I would like
these please.");
VoicePlay("F100210000_46_010");
MsgDisp("Librarian","Yes, 20 books then.
The loan period is two weeks.");
MsgDisp("主人公","(Ehhh∋
So the one who borrowed 20 books was
｛颯砂＊＊｝! )");
MsgClose();
ScrFadeOut(0);
