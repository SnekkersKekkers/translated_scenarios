BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Hm... looks like ｛本多＊＊｝ isn't here
yet.");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(35,254,0,0,0,#1,#1,0,0);
VoicePlay("B110300002_35_000");
MsgDisp("Guy","Hang on a sec～? What's with that pose? It
looks fantastic, you're nailing it!");
MsgDisp("主人公","Huh?");
ChEye(35,0);
ChMouth(35,0);
VoicePlay("B110300002_35_010");
MsgDisp("Guy","Got it! The perfect shot! You're a real 
Girl with the Pearl Earring!");
MsgDisp("主人公","Excuse me?");
ChEye(35,1);
ChMouth(35,0);
VoicePlay("B110300002_35_020");
MsgDisp("Guy","Oh, sorry about that! I'm actually out of
business cards right now. Despite how it
looks, I'm——");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
ChPosition(35,1);
SEWait();
BGMPlay("BGM_C03_HONDA_A",0.01);
ChOpen(3,253,5,3,3,#1,#1,0,2,0,30);
MsgDispSksp(1,5);
VoicePlay("B110300002_03_000");
MsgDisp("Honda","Wow, that jacket is amazing!");
MsgDispSksp(0);
ChEye(35,2);
ChMouth(35,0);
VoicePlay("B110300002_35_030");
MsgDisp("Guy","Oh, you've got a good eye. This gold
jacket is a symbol of success.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3,1);
MsgDispSksp(1,5);
VoicePlay("B110300002_03_010");
MsgDisp("Honda","Yeah, you must be a CEO of a big company
or something?");
MsgDispSksp(0);
ChEye(35,0);
ChMouth(35,0);
VoicePlay("B110300002_35_040");
MsgDisp("Guy","Of course! I'm the CEO of a major talent 
agency.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
MsgDispSksp(1,5);
VoicePlay("B110300002_03_020");
MsgDisp("Honda","I knew it. Can a CEO in a gold jacket
afford to waste time in a place like this?");
MsgDispSksp(0);
ChEye(35,1);
ChMouth(35,0);
VoicePlay("B110300002_35_050");
MsgDisp("Guy","Oops, time is money. And now it's time for
my board meeting.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(35,0,30);
ChPosition(3,0);
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("B110300002_03_030");
MsgDisp("Honda","What was with the gold jacket? It reminded
me of red salmon.");
MsgDisp("主人公","Haha! Thanks for saving me ｛本多＊＊｝.");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,2,1);
VoicePlay("B110300002_03_040");
MsgDisp("Honda","No, it's my fault. Because I was late the 
gold jacket guy showed up.");
MsgDisp("主人公","(｛本多＊＊｝... somehow, you were really
reliable.)");
