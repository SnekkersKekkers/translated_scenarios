BGMStop();
BGOpen("sc605",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    VoicePlay("P830300001_48_000");
    MsgDisp("School Girl","Excuse meー.
I want two permanent marker pens.");
    MsgDisp("主人公","Yeーs.
Is this okay?");
    VoicePlay("P830300001_48_010");
    MsgDisp("School Girl","Thank you very muーch!");
    MsgDisp("主人公","(Phew... I don't have time to catch a
breath huh...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(3);
    VoicePlay("P830300001_03_000");
    MsgDisp("Honda","｛主人公｝.
You seem busy, huh?");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
Yeah, because I'm managing.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("P830300001_03_010");
    MsgDisp("Honda","Then, I'll wait obediently.
Once you reach a stopping place, 
let's eat together at a food stall?");
    MsgDisp("主人公","Yeah!");
    MsgDisp("主人公","(Alrーight, 
I'll hold on a little longer, 
and do my best!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(There are only two permanent marker pens
left. When everyone borrows it, they don't
return it...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,4,0,4,-1,-1,0,0);
    VoicePlay("P830300001_03_020");
    MsgDisp("Honda","What's wrong, you look troubled?");
    MsgDisp("主人公","Ah, ｛本多＊＊｝...
The pens that were borrowed
haven't been returned....");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("P830300001_03_030");
    MsgDisp("Honda","Ehhh, is that right?
Even though it belongs to everyone.
I'll go retrieve them.");
    MsgDisp("主人公","Ehh? I'm sorry.
Even though it's the cultural festival.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P830300001_03_040");
    MsgDisp("Honda","That goes for you too.
You're missing out on the 
cultural festival too.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5,1);
    VoicePlay("P830300001_03_050");
    MsgDisp("Honda","Ah, but in return, 
when you can take a break,
let's walk around together, okay?");
    MsgDisp("主人公","Yeah, thank you!");
    MsgDisp("主人公","(So that I can enjoy the cultural festival
with ｛本多＊＊｝, Let's hold on a little
longer and do our best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
