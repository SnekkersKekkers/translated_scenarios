switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120200001_02_000");
    MsgDisp("Sassa","That was fun.");
    MsgDisp("主人公","Yeah.
｛颯砂＊＊｝, 
thanks for walking me home.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S120200001_02_010");
    MsgDisp("Sassa","No problem.
I think I'll jog home.");
    MsgDisp("主人公","Practicing on New Years, too?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("S120200001_02_020");
    MsgDisp("Sassa","New Years isn't an excuse not to
train.
Cya.");
    MsgClose();
    MsgClose();
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(｛颯砂＊＊｝ is amazing.
He's working hard towards his goals
already this year. I will too......!)");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you for walking me home.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S120200001_02_030");
    MsgDisp("Sassa","I actually wish I could spend more
time with you. But it's not good to 
sprint so quickly beyond the starting 
point.");
    MsgDisp("主人公","In ｛颯砂＊＊｝'s mind,
even this is like a track event.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S120200001_02_040");
    MsgDisp("Sassa","Really?
If this was a race, I would give it my
all from the beginning, without any
hestiation.");
    MsgDisp("主人公","Your all?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S120200001_02_050");
    MsgDisp("Sassa","Of course. Would you hang out with
me until we're completely exhausted?");
    MsgDisp("主人公","Hehe, sounds fine.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("S120200001_02_060");
    MsgDisp("Sassa","Eh, really?
So next time let's have an all-out date.");
    MsgDisp("主人公","An all-out date?");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,0);
    VoicePlay("S120200001_02_070");
    MsgDisp("Sassa","Yeah.
We can go camping after swimming at the 
pool. And after swimming we can go 
skiing.");
    MsgDisp("主人公","That's crazy.
It's like some kind of challenge.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("S120200001_02_080");
    MsgDisp("Sassa","I think I'll try to build up my
stamina for an all-out date.
Cya.");
    MsgClose();
    MsgClose();
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(Ah, ｛颯砂＊＊｝ left......
I hope this year is fun too.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0);
