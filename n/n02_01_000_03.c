ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,254,0,2,2,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("N020100003_01_000");
    MsgDisp("Kazama","I was worried you'd get to this point.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝, what's wrong?");
    ChEyeOpenLevel(1,0);
    Wait(10,0);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("N020100003_01_010");
    MsgDisp("Kazama","What's wrong with you...
It's impossible for me to not feel
anything with this ranking.");
    ChEyeOpenLevel(1,0);
    Wait(8,0);
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("N020100003_01_020");
    MsgDisp("Kazama","Please look at the list again.
And then look at your ranking.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    MsgDisp("主人公","(Oof...
I've got to study harder...)");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,254,0,2,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(1);
    VoicePlay("N020100003_01_030");
    MsgDisp("Kazama","｛主人公｝.
Aren't you quite a scatterbrain?");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
Umm...
What do you mean?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("N020100003_01_040");
    MsgDisp("Kazama","Hmm?
Did you answer in the wrong column?");
    MsgDisp("主人公","Umm...");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,3);
    VoicePlay("N020100003_01_050");
    MsgDisp("Kazama","Don't tell me this isn't a mistake.");
    ChEyeOpenLevel(1,0);
    Wait(10,0);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("N020100003_01_060");
    MsgDisp("Kazama","I'm speechless, this was unexpected.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    MsgDisp("主人公","(I can't keep doing this.
I've got to study harder!)");
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgDisp("主人公","(Ahh, this score is terrible...)");
    MsgClose();
    ChOpen(1,254,0,0,2,#1,#1,0,0);
    VoicePlay("N020100003_01_070");
    MsgDisp("Kazama","Hey.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("N020100003_01_080");
    MsgDisp("Kazama","This doesn't seem like you at all.");
    MsgDisp("主人公","Uh...");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("N020100003_01_090");
    MsgDisp("Kazama","You're someone who takes everything
seriously, right?");
    MsgDisp("主人公","Y-Yeah...");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("N020100003_01_100");
    MsgDisp("Kazama","Then, be you and do your best next time.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    VoicePlay("N020100003_01_110");
    MsgDisp("Kazama","Come on, let's go.
I'll accompany you today.
So tell me, where did you go wrong?");
    MsgDisp("主人公","(Oof...
Thank you, ｛風真＊＊｝.
I've really got to study harder...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(1);
