BGMPlay("BGM_PLACE_TRAVEL",0.01);
BGOpen("sc820",0);
ChLayout(1);
MsgClose();
ChOpen(2,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Wow...the orange flowers are so pretty.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("Q070200000_02_000");
MsgDisp("Sassa","Yeah, I don't know what it's called, it
doesn't look like a tulip.");
MsgDisp("主人公","It's called a marigold.
So pretty...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("Q070200000_02_010");
MsgDisp("Sassa","Yeah.
We came at the right time, didn't we?
This kind of thing is important.");
MsgDisp("主人公","Hehe, yes.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("Q070200000_02_020");
MsgDisp("Sassa","That's lucky of us.");
MsgDisp("主人公","Hehe, as expected of ｛颯砂＊＊｝.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("Q070200000_02_030");
MsgDisp("Sassa","Did I say something strange?");
MsgDisp("主人公","No, I think it's nice that you consider
yourself lucky.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("Q070200000_02_040");
MsgDisp("Sassa","I think so too. Getting to go sightseeing
in Nagasaki with you...I'm really lucky.");
MsgDisp("主人公","(｛颯砂＊＊｝ ...)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
ChClose(2,0,0);
BGOpen("sc821",0);
ScrFadeIn(0);
MsgClose();
ChOpen(2,254,0,0,0,#1,#1,0,0);
VoicePlay("Q070200000_02_050");
MsgDisp("Sassa","Huh...
That's a big building..");
MsgDisp("主人公","Such a big tower!
It's called Domtoren Tower.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("Q070200000_02_060");
MsgDisp("Sassa","Hmm, 105 metres...
It looks much taller from down here.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("Q070200000_02_070");
MsgDisp("Sassa","Are we allowed to climb it?");
MsgDisp("主人公","Eh?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("Q070200000_02_080");
MsgDisp("Sassa","C'mon.
Since we started this trip, I haven't been
able to train.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("Q070200000_02_090");
MsgDisp("Sassa","Let's go together!
Give me your hand.");
MsgDisp("主人公","Eeeh∋");
MsgClose();
SEPlay("EV_SE_504");
SEWait();
SEPlay("EV_SE_FOOT_RUN_AWAY_TWO");
MsgClose();
ChClose(2);
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("主人公","(After this, we'll move on to Nagasaki
City.
Let's enjoy Huis ten Bosch until the end!)");
BGMStop(2);
Wait(60,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc823",0);
ScrFadeIn(0);
BGMPlay("BGM_C02_SASSA_B",0.01);
ChOpen(2,254,4,0,0,#1,#1,0,0);
VoicePlay("Q070200000_02_100");
MsgDisp("Sassa","Sorry about earlier.
The tower had a lift after all, huh.
I made you run for nothing.");
MsgDisp("主人公","Well, it was good exercise.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("Q070200000_02_110");
MsgDisp("Sassa","Let's take a rest here, then.");
MsgDisp("主人公","Yeah.
The building and the flowerbeds are
beautiful and relaxing.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("Q070200000_02_120");
MsgDisp("Sassa","This mansion was made by a foreigner 150
years ago...");
MsgDisp("主人公","Yeah, it says that he was a merchant.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("Q070200000_02_130");
MsgDisp("Sassa","There were no planes back then, so I guess
it was hard to return home.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("Q070200000_02_140");
MsgDisp("Sassa","Hmmm...Cutting off all your escape routes
like that. That's tough.");
MsgDisp("主人公","Yeah, it sounds like it would be difficult
to do.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("Q070200000_02_150");
MsgDisp("Sassa","It's like how I'd quit Track and Field if
I don't win all my matches during the
Inter-High.");
MsgDisp("主人公","Eh? ...｛颯砂＊＊｝?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("Q070200000_02_160");
MsgDisp("Sassa","I guess I'm not ready to do that.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("Q070200000_02_170");
MsgDisp("Sassa","But if I'm not good enough, that means I
wouldn't have what it takes for what comes
next.");
MsgDisp("主人公","You can do it, ｛颯砂＊＊｝!");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("Q070200000_02_180");
MsgDisp("Sassa","Why is it that when you say it, I feel as
though I can really do it?");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("Q070200000_02_190");
MsgDisp("Sassa","I'm so simple.");
MsgDisp("主人公","｛颯砂＊＊｝, you're not simple as
you think. You have a crazy training
schedule that you follow everyday.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("Q070200000_02_200");
MsgDisp("Sassa","Thank you.
When I think about you watching over me
like that──");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("Q070200000_02_210");
MsgDisp("Sassa","Like the merchants who came here...maybe
I'm also going to push myself into a
corner, with no way out.");
MsgDisp("主人公","(I'd be happy if I could help
｛颯砂＊＊｝ in any way...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ChCheek(2,0);
