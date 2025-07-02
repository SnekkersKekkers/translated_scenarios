BGOpen("ho000",0);
ChLayout(1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("S120300001_03_000");
    MsgDisp("Honda","Phew.
We're here.");
    MsgDisp("主人公","Thank you for walking me home.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S120300001_03_010");
    MsgDisp("Honda","Yeah, let's chat a lot this year
too.
I think we have a good head start.");
    ChSet(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("S120300001_03_020");
    MsgDisp("Honda","Have a good New Years!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    MsgClose();
    ChClose(3);
    Wait(30);
    MsgDisp("主人公","(I hope we have a good year......)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Thank you for walking me home.");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("S120300001_03_030");
    MsgDisp("Honda","About that,
I hope I didn't talk too much.");
    MsgDisp("主人公","Hehe, it was fine.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("S120300001_03_040");
    MsgDisp("Honda","Yes!
It's hard to get a good vibe.");
    VoicePlay("S120300001_03_050");
    MsgDisp("Honda","When there's not enough, I keep
talking——");
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,5,1);
    VoicePlay("S120300001_03_060");
    MsgDisp("Honda","Like that, sorry.
I promised I'd play Shogi with my dad
after this!");
    MsgDisp("主人公","Hehe, really?
Good luck!");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S120300001_03_070");
    MsgDisp("Honda","Alright! I can win with your
support!
See you soon!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    MsgClose();
    ChClose(3);
    Wait(30);
    MsgDisp("主人公","(Yeah, this year will be another
good one.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
