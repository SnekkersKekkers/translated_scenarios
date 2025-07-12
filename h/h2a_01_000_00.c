BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_B",0.01);
    ChOpen(1,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H2A0100000_01_000");
    MsgDisp("Kazama","First place overall, huh.
Our track and field club is amazing.");
    MsgDisp("主人公","Yeah!
Looks like everyone did their best!");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H2A0100000_01_010");
    MsgDisp("Kazama","Thanks to your guidance, right?");
    MsgDisp("主人公","Guidance?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("H2A0100000_01_020");
    MsgDisp("Kazama","You were a great manager, weren't
you?
Much better than Mikage-sensei.");
    MsgDisp("主人公","(Looks like everyone did their
best. I'm glad I could support them
as their manager until now!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_B",0.01);
    ChOpen(1,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChEye(1,3);
    ChMotion(1,3);
    VoicePlay("H2A0100000_01_030");
    MsgDisp("Kazama","Winning championships is pretty
amazing.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
Yes, it's thanks to everyone's hard work.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("H2A0100000_01_040");
    MsgDisp("Kazama","Maybe that's true,
but I think you're the most amazing.");
    MsgDisp("主人公","Hm?");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("H2A0100000_01_050");
    MsgDisp("Kazama","You need a lot of knowledge to
take proper care of the players, right?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H2A0100000_01_060");
    MsgDisp("Kazama","Studying hard and working hard,
only someone as stubborn as you could
pull it off.");
    MsgDisp("主人公","Geez, you don't need to call me
stubborn. But thanks!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H2A0100000_01_070");
    MsgDisp("Kazama","Yeah.
But starting tomorrow, I'll have you
working exclusively for me.");
    MsgDisp("主人公","Hehe, sure, sure.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("H2A0100000_01_080");
    MsgDisp("Kazama","It's fine if you know.
Come on, everyone's waiting.");
    MsgDisp("主人公","(｛風真＊＊｝ seemed really happy.
I'm glad I did my best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
