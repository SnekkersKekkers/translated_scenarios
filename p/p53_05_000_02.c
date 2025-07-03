BGMStop();
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Seems like I'm calm this year.
Maybe it's because I've been giving
it my all these last three years?)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,0,4,-1,-1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("P530500002_05_000");
    MsgDisp("Hiiragi","｛主人公｝,
This is your last stage, 
I look forward to it.");
    MsgDisp("主人公","｛柊＊＊＊｝, thank you! I'll do my best so
I can show the results of my three years
of hard work.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P530500002_05_010");
    MsgDisp("Hiiragi","Yes.
I'll close my eyes and 
search for your sound.");
    MsgDisp("主人公","Eh?
I want you to look carefully.");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P530500002_05_020");
    MsgDisp("Hiiragi","Heheh, pardon me.
That's right, isn't it?");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P530500002_05_030");
    MsgDisp("Hiiragi","You're reliable. No matter what the 
result is, Your last three years of
hard work is the real deal.
Your current self is proof of it.");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Thank you, ｛柊＊＊＊｝.
For my last performance, 
I'll give it my all.");
    ChMotion(5,3);
    Wait(30,1);
    ChEye(5,3);
    ChMouth(5,4);
    VoicePlay("P530500002_05_040");
    MsgDisp("Hiiragi","I wish you the best of luck.");
    MsgDisp("主人公","(Alright, Whether I laugh or cry, this is
the last one. Let's give it our all!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Seems like I'm calm this year.
Maybe it's because I've been giving
it my all these last three years?)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,0,4,-1,-1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("P530500002_05_050");
    MsgDisp("Hiiragi","｛主人公｝,
This is your last performance, correct?");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
Thank you for coming.");
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    ChEyeOpenLevel(5,9);
    VoicePlay("P530500002_05_060");
    MsgDisp("Hiiragi","Heheh.
I seem to be more tense than you, 
who sis performing on stage.");
    MsgDisp("主人公","Eh?");
    ChEyeOpenLevel(5,0);
    VoicePlay("P530500002_05_070");
    MsgDisp("Hiiragi","I wanted to relieve your stress, 
but it appears there's no need for that.");
    MsgDisp("主人公","No.
I calmed down seeing ｛柊＊＊＊｝ 's face.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P530500002_05_080");
    MsgDisp("Hiiragi","Is that so.
Then, I'll enjoy your performance 
without haste.");
    MsgDisp("主人公","So that I can satisfy ｛柊＊＊＊｝,
I'll do my best.");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,3);
    Wait(20,1);
    VoicePlay("P530500002_05_090");
    MsgDisp("Hiiragi","Yes.
Seeing your face full of self-belief, 
is already plenty satisfactory.");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P530500002_05_100");
    MsgDisp("Hiiragi","After that, it's just a matter
of whether you're satisfied?");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Ah, it's starting!
Thank you, ｛柊＊＊＊｝!
I'll play my last performance now.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P530500002_05_110");
    MsgDisp("Hiiragi","I'll see you later.");
    MsgDisp("主人公","(Alright, let's perform so 
that I don't regret it!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
