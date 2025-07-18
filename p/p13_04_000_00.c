BGOpen("sc721",0);
BGMPlay("BGM_PLACE_SHOP");
Wait(50,0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(Seems like our attraction 'Find Molly in
the giant maze' is attracting a lot of
attention more and more people are
gathering...)");
    MsgClose();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("P130400000_04_000");
    MsgDisp("Nanatsumori","Cow...");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝. It's a
maze with Mikage-sensei's family cow,
Molly! Won't you try it?");
    VoicePlay("P130400000_04_010");
    MsgDisp("Nanatsumori","What happens if you reach the goal safely?");
    MsgDisp("主人公","You get to drink freshly-squeezed milk!");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("P130400000_04_020");
    MsgDisp("Nanatsumori","What's that?
The whole idea seems pretty funny, so I'll
give it a shot.");
    MsgDisp("主人公","Then, entry for one!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","It's a maze～
If you can reach the finish line, you get
to drink freshly squeezed milk～");
    MsgClose();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,3,3,#1,#1,0,0,0,60);
    VoicePlay("P130400000_04_030");
    MsgDisp("Nanatsumori","That sort of flair...is super
interesting.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!
This is a maze for the cow, Molly.
By all means, please enter～!");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("P130400000_04_040");
    MsgDisp("Nanatsumori","Enough about the cow Molly, what's with
the freshly squeezed milk?");
    MsgDisp("主人公","It's super delicious?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P130400000_04_050");
    MsgDisp("Nanatsumori","Hearing you say that makes me curious...");
    MsgDisp("主人公","The maze is also fun?");
    ChEye(4,4);
    ChMouth(4,4);
    VoicePlay("P130400000_04_060");
    MsgDisp("Nanatsumori","...I'll enter.");
    MsgDisp("主人公","Then, admission for one!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
