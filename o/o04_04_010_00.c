ChLayout(1);
ChNanaType(0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","My team is......
Ah, it's ｛七ツ森＊｝.");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChNanaType(0);
    ChOpen(4,30,0,2,2,#1,#1,0,0,0,60);
    ChMotion(4,1,1);
    VoicePlay("O040401000_04_000");
    MsgDisp("Nanatsumori","How annoying......");
    MsgDisp("主人公","Geez......
Let's do our best together!");
    break ;
    case 3:
    MsgDisp("主人公","My team is......
Ah, it's ｛七ツ森＊｝.");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChNanaType(0);
    ChOpen(4,30,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("O040401000_04_010");
    MsgDisp("Nanatsumori","Hm?
I'm on the same team as you?");
    MsgDisp("主人公","Looks like it.
Looking forward to it!");
    ChMotion(4,1,1);
    VoicePlay("O040401000_04_020");
    MsgDisp("Nanatsumori","Ah, aah. ......You, aren't serious about
this, right?");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","My team is......");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChNanaType(0);
    ChOpen(4,30,0,0,0,#1,#1,0,0,0,60);
    VoiceEVSPlay(4);
    VoicePlay("O040401000_04_030");
    MsgDisp("Nanatsumori","｛主人公｝.
Looks like we're on the same team?");
    MsgDisp("主人公","｛七ツ森＊｝!
Looking forward to it!");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("O040401000_04_040");
    MsgDisp("Nanatsumori","Not sure if I can 
live up to your expectations, though.");
    MsgDisp("主人公","Let's both do our best together?");
    ChEye(4,1);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("O040401000_04_050");
    MsgDisp("Nanatsumori","Together......
Yeah. Let's do this.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
