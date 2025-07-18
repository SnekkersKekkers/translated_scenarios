switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,4);
    ChMouth(5,2);
    ChMotion(5,0,1);
    VoicePlay("L040500002_05_000");
    MsgDisp("Hiiragi","This is a famous brand...I've received it
once before from a patron. ...You're
giving it to me?");
    MsgDisp("主人公","Yeah!");
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("L040500002_05_010");
    MsgDisp("Hiiragi","I see...I suppose it suits me. Well,
thank you. Farewell.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(Was I a little too excited...?)");
    break ;
    case 3:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("L040500002_05_020");
    MsgDisp("Hiiragi","Oh, I know.
This is a famous chocolatier.
Thank you for going out of your way.");
    ChEye(5,3);
    ChMouth(5,3);
    VoicePlay("L040500002_05_030");
    MsgDisp("Hiiragi","Are you doing fine on funds, still?");
    MsgDisp("主人公","Yeah, I guess so!");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("L040500002_05_040");
    MsgDisp("Hiiragi","Haha.
Was my reaction enough to justify the
expense?");
    MsgDisp("主人公","Hm, it was alright, I suppose?");
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("L040500002_05_050");
    MsgDisp("Hiiragi","How harsh.
Like a director who makes actors shed
tears.");
    ChEye(5,4);
    ChMouth(5,4);
    VoicePlay("L040500002_05_060");
    MsgDisp("Hiiragi","Thank you.
I will do my best to ensure that I savor
the taste.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(Thank goodness, ｛柊＊＊＊｝
seems happy!)");
    break ;
    case 4:
    case 5:
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,0,1);
    VoicePlay("L040500002_05_070");
    MsgDisp("Hiiragi","This is...
We often receive it from our patrons.
It's from one of the finest shops.");
    MsgDisp("主人公","Hehe, I went all out.");
    ChEye(5,4);
    ChMouth(5,4);
    VoicePlay("L040500002_05_080");
    MsgDisp("Hiiragi","I see, my thanks.
For working part-time or saving up for
this.");
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    ChCheek(5,5);
    VoicePlay("L040500002_05_090");
    MsgDisp("Hiiragi","This chocolate is the fruit of your time
and effort.
That makes me very happy.");
    MsgDisp("主人公","｛柊＊＊＊｝, you're
exaggerating a bit.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    ChCheek(5,0);
    VoicePlay("L040500002_05_100");
    MsgDisp("Hiiragi","Not at all. Many believe handmade to be
superior, but I believe time is also
important. You gave me your time.");
    ChEye(5,3);
    ChMotion(5,4);
    VoicePlay("L040500002_05_110");
    MsgDisp("Hiiragi","And...would you give me your time to eat
this as well?
Let us eat it together.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(Thank goodness...
｛柊＊＊＊｝ seemed happy!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
