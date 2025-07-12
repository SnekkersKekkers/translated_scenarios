BGOpen("ar300",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_589");
    Wait(50,0);
    MsgDisp("主人公","Alright, alright!
Thank you very much～!");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    SEStop("EV_SE_589",3);
    ChOpen(2,255,3,0,3,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("I650200000_02_000");
    MsgDisp("Sassa","｛主人公｝,
you're energetic.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝, what's up?");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("I650200000_02_010");
    MsgDisp("Sassa","Your cheerful voice called me here.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I650200000_02_020");
    MsgDisp("Sassa","If you're like this, then
the customers will want to come again.");
    MsgDisp("主人公","I'd be happy if they did.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I650200000_02_030");
    MsgDisp("Sassa","No doubt about it.
I was drawn in even though I don't
need any gasoline.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,2);
    VoicePlay("I650200000_02_040");
    MsgDisp("Sassa","Ah, another car's here.
See you.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    MsgDisp("主人公","(｛颯砂＊＊｝ came to check on me,
right? I'm so happy!)");
    break ;
    case 3:
    SEPlay("EV_SE_589");
    Wait(50,0);
    MsgDisp("主人公","Alright, alright!
Thank you very much～!");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    SEStop("EV_SE_589",3);
    ChOpen(2,40,3,0,4,#1,#1,0,0);
    VoicePlay("I650200000_02_050");
    MsgDisp("Sassa","You're working hard today, too!");
    MsgDisp("主人公","Ah, are you on a run,
｛颯砂＊＊｝?");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("I650200000_02_060");
    MsgDisp("Sassa","Yeah.
I got tired of running laps on the
grounds, so I'm on the roads now.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("I650200000_02_070");
    MsgDisp("Sassa","Then, I heard your 'alright, alright!'
And found myself making a pit stop.");
    MsgDisp("主人公","Hehe, do you need to be refueled,
｛颯砂＊＊｝?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("I650200000_02_080");
    MsgDisp("Sassa","Too bad.
I'm not a gasoline-powered car.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("I650200000_02_090");
    MsgDisp("Sassa","Hm...... alright.
Looks like my tank's full.
See you!");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    MsgDisp("主人公","(His tank......?
What does he mean?)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_589");
    Wait(50,0);
    MsgDisp("主人公","Alright, alright!
Thank you very much～!");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    SEStop("EV_SE_589",3);
    ChOpen(2,255,3,0,4,#1,#1,0,0);
    VoicePlay("I650200000_02_100");
    MsgDisp("Sassa","You're energetic today, too.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Welcome.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("I650200000_02_110");
    MsgDisp("Sassa","Yeah. I'm not a driver, but
wanted to stop here for a break, too.");
    MsgDisp("主人公","Is that so?
Then, you can go inside to use the
vending machine and get a drink.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("I650200000_02_120");
    MsgDisp("Sassa","I'll go rest up then.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    MsgClose();
    ChClose(2);
    MsgDisp("主人公","｛颯砂＊＊｝......
Was he feeling okay?");
    BGMVol(0.5,2);
    MsgClose();
    ScrFadeOut(0);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    ScrFadeIn(0);
    MsgDisp("主人公","Full tank of regular!
Replacing the ashtray, and window wiping
is all done as well!");
    SEPlay("EV_SE_589");
    VoicePlay("I650200000_36_000");
    MsgDisp("Male Customer","Thanks.
I'll come again～");
    MsgDisp("主人公","Thank you very much～!");
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    Wait(90,0);
    MsgClose();
    ChOpen(2,255,0,0,4,#1,#1,0,0);
    VoicePlay("I650200000_02_130");
    MsgDisp("Sassa","Thanks.
Thanks to you, I'm completely refreshed.");
    MsgDisp("主人公","Hm?　I didn't do anything.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("I650200000_02_140");
    MsgDisp("Sassa","Seeing you work so hard for others
refreshed me so much, it was like getting
hit in the back of my head.");
    MsgDisp("主人公","Huh∋");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("I650200000_02_150");
    MsgDisp("Sassa","Yeah, since I'm just working
for myself with this. If I got hesitant
about that, I'd feel bad for you.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("I650200000_02_160");
    MsgDisp("Sassa","I'm starting to feel motivated!
See you!");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    VoicePlay("I650200000_02_170");
    MsgDisp("Sassa","Ah, I got juice for you too,
so drink it on your way home!");
    MsgClose();
    MsgDisp("主人公","(｛颯砂＊＊｝......
I'm happy that I could help him out.
Yeah, I'm glad I got this part-time job!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
