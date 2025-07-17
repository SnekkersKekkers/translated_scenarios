BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,30,4,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030200001_02_000");
    MsgDisp("Sassa","Sorry, did I push you too hard?");
    MsgDisp("主人公","No, I'm fine.");
    ChEye(2,2);
    ChMouth(2,0);
    ChMotion(2,2);
    ChEyeOpenLevel(2,0);
    VoicePlay("O030200001_02_010");
    MsgDisp("Sassa","...How frustrating.");
    MsgDisp("主人公","(I wonder if we should've been in more
sync...)");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,30,4,2,0,0,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030200001_02_020");
    MsgDisp("Sassa","Ugh, it's so frustrating...");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("O030200001_02_030");
    MsgDisp("Sassa","Sorry.
It must've been hard for you to match
strides with someone as tall as me.");
    MsgDisp("主人公","Not at all.
Rather, sorry for making you match pace
with me, ｛颯砂＊＊｝.");
    ChEye(2,2);
    ChMouth(2,0);
    ChMotion(2,2);
    ChEyeOpenLevel(2,0);
    VoicePlay("O030200001_02_040");
    MsgDisp("Sassa","It was nothing.
... It's just that I wanted to share a
win with you.");
    MsgDisp("主人公","(Yeah, we should've been in better
sync...)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,30,2,0,0,7,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030200001_02_050");
    MsgDisp("Sassa","Uwah, seriously...");
    MsgDisp("主人公","｛颯砂＊＊｝, I'm sorry.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("O030200001_02_060");
    MsgDisp("Sassa","No, it's not your fault.
I should've adjusted my stride.
I was rushing like an idiot.");
    MsgDisp("主人公","Not at all.
It would've been easier for you if you
were alone, ｛颯砂＊＊｝...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("O030200001_02_070");
    MsgDisp("Sassa","Hey.
There's no point if I'm not with you.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    ChCheek(2,10);
    VoicePlay("O030200001_02_080");
    MsgDisp("Sassa","With that in mind, I'm just happy that we
were together.");
    MsgDisp("主人公","Huh?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("O030200001_02_090");
    MsgDisp("Sassa","Maybe it's not that bad to be tied
together like this?
-Wait, what am I saying?");
    MsgDisp("主人公","(I can't tell if ｛颯砂＊＊｝ is
frustrated or not...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
