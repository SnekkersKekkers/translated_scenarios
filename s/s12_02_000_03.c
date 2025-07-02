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
    MsgDisp("主人公","Thank you for walking me back.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("S120200003_02_000");
    MsgDisp("Sassa","No problem.
We got to your house so quickly.");
    MsgDisp("主人公","It's because time flies when we
talk.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("S120200003_02_010");
    MsgDisp("Sassa","I guess you're right.
When we're together, time passes quickly.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("S120200003_02_020");
    MsgDisp("Sassa","It's like a hard workout.
When you're watching over me, before I 
even realize it, it's over.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S120200003_02_030");
    MsgDisp("Sassa","So, please watch over me this year
too.
Cya.");
    MsgClose();
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    MsgClose();
    ChClose(2);
    MsgDisp("主人公","(This year, ｛颯砂＊＊｝
is also trying his best.
I need to work hard too!)");
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
    ChMotion(2,5);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120200003_02_040");
    MsgDisp("Sassa","I thought we were walking slowly,
but somehow we've already arrived.");
    MsgDisp("主人公","Yeah, you're right...
Thanks for walking me back.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,5);
    VoicePlay("S120200003_02_050");
    MsgDisp("Sassa","This is our last year of high
school, so I prayed earnestly.");
    MsgDisp("主人公","I see. Since it's ｛颯砂＊＊｝,
I'm sure you'll do well.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,5);
    ChEyeOpenLevel(2,0);
    VoicePlay("S120200003_02_060");
    MsgDisp("Sassa","Haha, you're a strange person.");
    MsgDisp("主人公","Um, did I say something weird......?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("S120200003_02_070");
    MsgDisp("Sassa","No. When you talk to me like that,
I really start to believe I can do it.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S120200003_02_080");
    MsgDisp("Sassa","But when other people say things
like that, it feels ambiguous.");
    MsgDisp("主人公","I see......
I'm sorry for saying something weird.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S120200003_02_090");
    MsgDisp("Sassa","Don't be.
For stubborn guys like me who do
everything by themselves, I like just
listening you.");
    MsgDisp("主人公","......Why?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    ChCheek(2,10);
    VoicePlay("S120200003_02_100");
    MsgDisp("Sassa","That's because for me......
You are a special person.");
    MsgDisp("主人公","Huh?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("S120200003_02_110");
    MsgDisp("Sassa","Happy New Year!
Cya.");
    MsgClose();
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    MsgClose();
    ChClose(2);
    MsgDisp("主人公","(｛颯砂＊＊｝ is also competing
this year.
Even if it's only a little, I also want
to grow stronger......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0);
