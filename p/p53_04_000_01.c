BGMStop();
BGOpen("sc740",0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","(Uwaah...there's so many people in the
audience. It seems like it's more than
last year. Haa, I'm nervous.)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,3,-1,-1,0,0,0,60);
    VoicePlay("P530400001_04_000");
    MsgDisp("Nanatsumori","Yo.
The game's——");
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("P530400001_04_010");
    MsgDisp("Nanatsumori","You're nervous.");
    MsgDisp("主人公","Maybe a little...?");
    ChMotion(4,1,1);
    VoicePlay("P530400001_04_020");
    MsgDisp("Nanatsumori","Stop it...
I was really looking forward to 
the live gaming music.");
    MsgDisp("主人公","Uugh... even more pressure...");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P530400001_04_030");
    MsgDisp("Nanatsumori","Idiot. Because I'm looking forwards
to it, is why you need to enjoy 
it with all that you've got.");
    ChEye(4,4);
    ChMouth(4,3);
    VoicePlay("P530400001_04_040");
    MsgDisp("Nanatsumori","Games are meant to amuse people.
Isn't that why you chose 
game music?");
    MsgDisp("主人公","Yeah... that's right!");
    ChEye(4,1);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("P530400001_04_050");
    MsgDisp("Nanatsumori","Right, that face.
The face of a her
stepping onto the field.");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Then, I'm off!");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P530400001_04_060");
    MsgDisp("Nanatsumori","I wish you a good fight!");
    MsgDisp("主人公","(Alright, for everyone who came
all this way to listen, 
let'd deliver a good performance!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Uwaah...there's so many people in the
audience. It seems like it's more than
last year. Haa, I'm nervous.)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,-1,-1,0,0,0,60);
    VoiceEVSPlay(4);
    VoicePlay("P530400001_04_070");
    MsgDisp("Nanatsumori","｛主人公｝.
You're stressed, huhー.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Yeah...");
    VoicePlay("P530400001_04_080");
    MsgDisp("Nanatsumori","You're going to perform gaming music?
The kind that entertains people.");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("P530400001_04_090");
    MsgDisp("Nanatsumori","You're the one who creates 
that world, so it's hopeless
if you're like this.");
    MsgDisp("主人公","But if I think about 
everyone who knows this song,
failure is scary....");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("P530400001_04_100");
    MsgDisp("Nanatsumori","That's also part of a live orchestra.
Unexpectedly, the audience might also 
be looking forwatds to it, right?");
    MsgDisp("主人公","Ehhh?");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P530400001_04_110");
    MsgDisp("Nanatsumori","Haha!");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("P530400001_04_120");
    MsgDisp("Nanatsumori","You've done everything you can until now.
ＧＯ!");
    MsgDisp("主人公","Yes, I'm off!");
    MsgDisp("主人公","(｛七ツ森＊｝, thank you for encouraging
me! Alright, let's do our best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
