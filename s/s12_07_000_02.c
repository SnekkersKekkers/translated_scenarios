MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
BGOpen("ex020",0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120700002_07_000");
    MsgDisp("Mikage","Thank you.
I feel rejuvenated, thanks to you.");
    MsgDisp("主人公","Me too.
Thank you so much.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("S120700002_07_010");
    MsgDisp("Mikage","Cya later then.
Good luck this year.");
    MsgDisp("主人公","Yeah!
Happy New Years.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    Wait(30);
    MsgDisp("主人公","(I can't believe I'm already a third
year...
Alright, let's do our best!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120700002_07_020");
    MsgDisp("Mikage","Woah, it's already this late?
... I guess it's time to go home.");
    MsgDisp("主人公","Eh, already?");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S120700002_07_030");
    MsgDisp("Mikage","It can't be helped.
I'd be sorry if I kept you away from your
family on New Years.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("S120700002_07_040");
    MsgDisp("Mikage","Come, I'll walk you home.
We can talk about our New Year's
resolutions on the way there.");
    MsgDisp("主人公","Hehe, okay.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120700002_07_050");
    MsgDisp("Mikage","Phew, I feel refreshed.
That was a good shrine visit.");
    MsgDisp("主人公","Yep, it looks like it's going to be a good
year.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("S120700002_07_060");
    MsgDisp("Mikage","Right. This year makes it your third year.
We have to make it a good one, no matter
what.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("S120700002_07_070");
    MsgDisp("Mikage","Let's do our best, alright?");
    MsgDisp("主人公","Hehe, yeah.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("S120700002_07_080");
    MsgDisp("Mikage","Alright, I'll take you home.");
    MsgDisp("主人公","Eh, already...?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("S120700002_07_090");
    MsgDisp("Mikage","Already?
It's already been so long.");
    MsgDisp("主人公","...Really?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("S120700002_07_100");
    MsgDisp("Mikage","Haha, why are you going slow like a cow
even though this year is the year of the
rabbit? Come, let me take you home.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEye(7,#1);
ChMouth(7,#1);
