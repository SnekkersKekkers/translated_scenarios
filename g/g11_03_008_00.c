BGOpen("ar600",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(This an expanded color version of the
insect encyclopedia huh......
What a splendid book......)");
MsgClose();
BGMPlay("BGM_C03_HONDA_A");
ChOpen(3,35,0,0,0,#1,#1,0,0);
VoiceEVSPlay(3);
VoicePlay("G110300800_03_000");
MsgDisp("Honda","｛主人公｝, you have a good eye.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("G110300800_03_010");
MsgDisp("Honda","It also includes some of the insects from
the insect exhibition we went to the other
day.");
MsgDisp("主人公","Yes, ｛本多＊＊｝, I think I will like it.");
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
MsgClose();
BGOpen("ev003",0);
ChOpen(3,100,0,0,1,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110300800_03_020");
MsgDisp("Honda","Check this out.
A book that follows the 1000km journey of
the Chestnut Tiger butterfly.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1);
VoicePlay("G110300800_03_030");
MsgDisp("Honda","This one is about the 3500km journey of
the Monarch butterfly.
Which one are you interested in?");
MsgDisp("主人公","(Hmm......I'm more interested in the book
｛本多＊＊｝ is holding so dearly than the
ones on the shelf......)");
while (1){
    RunEverydaySksp(3,0,0,0,0,1);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    BGMVol(0.5,2);
    ChEye(3,0);
    ChMouth(3,2);
    ChMotion(3,1);
    VoicePlay("G110300800_03_060");
    MsgDisp("Honda","Although, I'm talking about books～");
    }
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,2);
VoicePlay("G110300800_03_040");
MsgDisp("Honda","Ah, you want this one tooー!");
MsgDisp("主人公","That's because ｛本多＊＊｝ was holding it
so dearly.");
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,1);
ChEyeOpenLevel(3,0);
VoicePlay("G110300800_03_070");
MsgDisp("Honda","Yep yep, that's fine.
This is a 'Weevil Picture Book', have at
it!");
MsgDisp("主人公","(Weevil......? Umm, maybe it's okay after
all.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
