BGOpen("sc721",0);
BGMPlay("BGM_PLACE_SHOP");
Wait(50,0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
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
    ChOpen(3,254,5,3,3,#1,#1,0,0);
    VoicePlay("P130300000_03_000");
    MsgDisp("Honda","Ah, perhaps......
Molly, as in Kojiro-sensei's pet cow∋");
    MsgDisp("主人公","｛本多＊＊｝, welcome! Yes, it's
｛御影＊＊｝'s family cow
Molly. If you like, do you want to try the
maze?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P130300000_03_010");
    MsgDisp("Honda","Yep, yep, of course! I'm super curious
about how the collaboration between Molly
and the maze came out!");
    MsgDisp("主人公","Then, admission for one!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","It's a maze～
If you can reach the finish line, you get
to drink freshly squeezed milk～");
    VoicePlay("P130300000_03_020");
    MsgDisp("Honda?","You get to drink cow milk if you clear the
maze∋
Super interesting∈");
    MsgClose();
    ChOpen(3,254,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","Ah, ｛本多＊＊｝, welcome.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("P130300000_03_030");
    MsgDisp("Honda","Hey, hey, will you also be doing anything
in the maze?");
    MsgDisp("主人公","No, I'm just here to welcome people.");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,5,1);
    VoicePlay("P130300000_03_040");
    MsgDisp("Honda","Ah, I see.
I wanted to go in together, but I guess
the poster girl can't leave her spot.");
    MsgDisp("主人公","Ah, I did make some traps in the maze,
though?");
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,5,1);
    VoicePlay("P130300000_03_050");
    MsgDisp("Honda","Eh!
You made some traps∋
Then I'm going!");
    MsgClose();
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    ChClose(3);
    MsgDisp("主人公","Ah!
Umm, entry for one then please～!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChOpen(3,254,0,0,0,#1,#1,0,0);
