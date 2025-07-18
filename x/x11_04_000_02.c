MsgClose();
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    VoicePlay("X110400002_04_000");
    MsgDisp("Nanatsumori","I heard that you won the practice match.
Will you become the world's best judo
player in the future?");
    MsgDisp("主人公","Hmmm, I'll do my best!");
    MsgDisp("主人公","(Phew, I'm glad we won!)");
    break ;
    case 4:
    case 5:
    VoicePlay("X110400002_04_010");
    MsgDisp("Nanatsumori","I'll be right back. Your too brilliant
one-handed backbreaker...I heard that you
made the audience go \"myriad?");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
It's a practice match, though, and we won.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("X110400002_04_020");
    MsgDisp("Nanatsumori","I know.
The whole school is talking about you.
That's great, congratulations.");
    MsgDisp("主人公","Thank you!");
    MsgDisp("主人公","(I'm glad I worked hard in the Judo Club
...!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
