MsgClose();
ChNanaType(0);
ChOpen(4,254,0,0,0,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    VoicePlay("X110400001_04_000");
    MsgDisp("Nanatsumori","Yo. The talented manager of the track and
field team. I heard you led them to
victory in a practice match? That's good.");
    MsgDisp("主人公","Phew, thanks!");
    MsgDisp("主人公","(Yeah, I'm the track and field manager.
I'm glad I did my best ......!)");
    break ;
    case 4:
    case 5:
    VoicePlay("X110400001_04_010");
    MsgDisp("Nanatsumori","Yo. You're a good manager of the track and
field team. I heard you won the practice
game the other day. Congratulations.");
    MsgDisp("主人公","Yes.
But I'm just the manager.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("X110400001_04_020");
    MsgDisp("Nanatsumori","But you are absolutely vital. He says the
track team is strong because of you. I
guess .......");
    MsgDisp("主人公","Phew, thanks.");
    MsgDisp("主人公","(Yeah, I'm a track and field manager.
I'm glad I did my best ......!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
