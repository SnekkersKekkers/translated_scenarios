BGMStop();
BGOpen("sc740",0);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","(I seem calmer this year.
Maybe it's because I worked so 
hard these last three years?)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,3,0,4,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P530200002_02_000");
    MsgDisp("Sassa","｛主人公｝.
I came to listen to your last 
cultural festival performance.");
    MsgDisp("主人公","｛颯砂＊＊｝, thank you.");
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("P530200002_02_010");
    MsgDisp("Sassa","Your song today is good.
I often heard you practicing.");
    ChEye(2,0);
    ChEyeOpenLevel(2,10);
    MsgDisp("主人公","Yeah, I also like it.
Maybe that's why I gave it
my best practicing it.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("P530200002_02_020");
    MsgDisp("Sassa","Is that so? I'll also recount things from
this last year whilst listening to your
performance.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,1);
    VoicePlay("P530200002_02_030");
    MsgDisp("Sassa","Then, have fun.");
    MsgDisp("主人公","Yes! I'm off. ");
    MsgDisp("主人公","(I'll also play carefully, remembering all
the practice I've done over the past
year!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(I seem calmer this year.
Maybe it's because I worked so 
hard these last three years?)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,4,0,0,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P530200002_02_040");
    MsgDisp("Sassa","｛主人公｝. I guess this is 
the last time I'll hear you play...
It's somewhat lonely.");
    MsgDisp("主人公","Yeah, that's right huh.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("P530200002_02_050");
    MsgDisp("Sassa","You've practiced this song 
often after school, right?");
    MsgDisp("主人公","Eh... maybe you heard it
all the way from the ground?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,1);
    VoicePlay("P530200002_02_060");
    MsgDisp("Sassa","Yeah, riding the wind. Then, miraculously,
I was able to push on, shift into a higher
gear, and gain more power.");
    MsgDisp("主人公","Really? That makes me happy.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("P530200002_02_070");
    MsgDisp("Sassa","Yeah, you always give me strength.
And I'm sure it's not just me, 
everyone else too.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("P530200002_02_080");
    MsgDisp("Sassa","I'm looking forward to it.
See you.");
    MsgDisp("主人公","Yeah!");
    MsgDisp("主人公","(Alright, for my last cultural festival,
let's give an unforgettable performance!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
