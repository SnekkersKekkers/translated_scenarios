switch (ChPrmGet(5,6)){
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
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you for today, ｛柊＊＊＊｝.
What are you doing later?");
    ChMotion(5,4);
    VoicePlay("S120500000_05_060");
    MsgDisp("Hiiragi","We will have a New Year's show soon, so
maybe some rehearsals and meetings, among
other things?");
    MsgDisp("主人公","Eh, no way∋
I guess maybe today wasn't the best time
to visit the shrine...?");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("S120500000_05_070");
    MsgDisp("Hiiragi","It's fine.
Both are important to me.
It was fun to pray with you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(I hope this year is another good year...)");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you for taking me.
｛柊＊＊＊｝, what are you doing after
this?");
    ChMotion(5,4);
    VoicePlay("S120500000_05_130");
    MsgDisp("Hiiragi","There will be a New Year's show soon, so
there is a lot for us to do.
Rehearsals, meetings, etcetera.");
    MsgDisp("主人公","I see...
That's rough.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("S120500000_05_140");
    MsgDisp("Hiiragi","Not at all.
Even if it was just a short time, being
together with you helped me recharge.");
    MsgDisp("主人公","Hehe, I'm happy.");
    ChEye(5,3);
    ChMotion(5,3);
    VoicePlay("S120500000_05_150");
    MsgDisp("Hiiragi","Thank you. I guess this means the New
Year's show will be a success? Okay then,
Happy New Years.");
    MsgDisp("主人公","The same to you!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(I hope this year will be another good
year...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
