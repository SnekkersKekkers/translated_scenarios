ChLayout(1);
MsgClose();
ScrFadeIn(0);
ChNanaType(0);
ChOpen(4,254,0,0,0,-1,-1,0,0);
switch (ChPrmGet(4,6)){
    case 3:
    VoicePlay("H180400000_04_000");
    MsgDisp("Nanatsumori","Yo.");
    MsgDisp("主人公","｛七ツ森＊｝!
Did you come to support us?");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("H180400000_04_010");
    MsgDisp("Nanatsumori","Well......
After all, we're winning, right?
Haba High is.");
    MsgDisp("主人公","Hehe, of course!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("H180400000_04_020");
    MsgDisp("Nanatsumori","Well, if the manager is this
fired up, I can just sit back and
watch.");
    MsgDisp("主人公","(Alright, let's do our best!)");
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,4);
    VoicePlay("H180400000_04_030");
    MsgDisp("Nanatsumori","Yo.
Good work, oh famous manager.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!");
    ChEye(4,4);
    ChMouth(4,4);
    VoicePlay("H180400000_04_040");
    MsgDisp("Nanatsumori","............
Don't you look pretty happy?");
    MsgDisp("主人公","Well, we managed to make it here.
Win or lose, I'm still excited.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("H180400000_04_050");
    MsgDisp("Nanatsumori","I guess so.
Even I'm excited enough that my legs
just carried me all the way here.");
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("H180400000_04_060");
    MsgDisp("Nanatsumori","I'll do my best to show my support.
Of course, to the Haba High Nine,
but to you, too.");
    MsgDisp("主人公","｛七ツ森＊｝...... thanks.");
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("H180400000_04_070");
    MsgDisp("Nanatsumori","Sure.
Well, go on!");
    MsgDisp("主人公","Yeah!");
    MsgDisp("主人公","(Alright, let's do our best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4);
