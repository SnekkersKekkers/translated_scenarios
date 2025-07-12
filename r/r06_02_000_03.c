switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,34,0,0,0,#1,#1,0,0);
    VoicePlay("R060200003_02_000");
    MsgDisp("Sassa","Woah, that's the one I brought...");
    MsgDisp("主人公","Wow!
Ah, ｛颯砂＊＊｝, you got the gift
that I brought too.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("R060200003_02_010");
    MsgDisp("Sassa","Seriously∋
That's quite the coincidence!");
    MsgDisp("主人公","Yeah, incredible!");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,34,0,0,0,#1,#1,0,0);
    VoicePlay("R060200003_02_020");
    MsgDisp("Sassa","Hey, that present you're holding...");
    MsgDisp("主人公","This present?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("R060200003_02_030");
    MsgDisp("Sassa","It looks familiar.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,5);
    VoicePlay("R060200003_02_040");
    MsgDisp("Sassa","...Uh, that's the one I brought.");
    MsgDisp("主人公","Huh∋　Really? Actually you got
the gift that I brought in, ｛颯砂＊＊｝...");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,5);
    VoicePlay("R060200003_02_050");
    MsgDisp("Sassa","This is your gift∋
That's a scary coincidence...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("R060200003_02_060");
    MsgDisp("Sassa","Well, I'm actually a little happy
about it.");
    MsgDisp("主人公","Hehe, it is a scary coincidence,
huh?");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,34,0,0,3,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("R060200003_02_070");
    MsgDisp("Sassa","｛主人公｝,
that's my gift!");
    MsgDisp("主人公","Huh, ｛颯砂＊＊｝, this is yours?
Ah!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("R060200003_02_080");
    MsgDisp("Sassa","This is your gift too, right?");
    MsgDisp("主人公","Y-Yeah.
But how did you know?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,3);
    VoicePlay("R060200003_02_090");
    MsgDisp("Sassa","...I was looking at you.
So I figured it out.");
    MsgDisp("主人公","Huuh?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("R060200003_02_100");
    MsgDisp("Sassa","Sorry, but I didn't cheat on purpose.
It really was a coincidence.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("R060200003_02_110");
    MsgDisp("Sassa","So, this really
was fate.");
    MsgDisp("主人公","Hehe, I guess so!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
