BGMPlay("BGM_C07_MIKAGE_C",0.01);
MsgType(3);
BGOpen("ad730",0);
ScrFadeIn(0);
VoicePlay("Y300700300_07_000");
MsgDisp("Mikage","\"I'll plant it here. I wonder what
colour the tulip will bloom into. I'm
looking forward to it.\"");
MsgDisp("","The Gardening Club's farming corner.
We planted Nagasaki's specialty bulb.");
MsgDisp("","These are the bulbs left after I gave
some to that girl.");
MsgClear();
SEPlay("EV_SE_821");
Wait(60,0);
MsgDisp("","Another thing to look forward to
this spring.
So many plants have taken root here.");
MsgDisp("","Each one has someone's wishes put
into them. When you look at it like
that, it is divine to look at.");
MsgClear();
SEPlay("EV_SE_627",0,0.6);
SEWait();
MsgDisp("主人公","\"Ah, ｛Mikage＊＊｝!
What are you planting?\"");
MsgDisp("","Perfect timing.
That's just the kind of person she
is — it's what makes her fun.");
MsgClear();
VoicePlay("Y300700300_07_010");
MsgDisp("Mikage","\"These are what's left of the MVP
prize.\"");
MsgDisp("主人公","\"They're tulip bulbs, right?\"");
MsgDisp("","For the MVP prize, I gave the tulip
bulbs I got as a souvenir from
Nagasaki on our school trip.");
MsgDisp("主人公","\"Can I plant some here too?\"");
MsgDisp("","Her smile is as lively as a plant
damp with morning dew.");
MsgClear();
VoicePlay("Y300700300_07_020");
MsgDisp("Mikage","\"I don't mind?
Then, bring some bulbs here next
time.\"");
MsgDisp("主人公","\"I'll bring them now\"");
MsgDisp("","Haha, is she walking to get them?
She really is a funny person.");
SEPlay("EV_SE_672",0,0.6);
SEWait();
MsgClear();
MsgDisp("","I think the way I call her 'Miss
Diligent' is seriously a perfect
nickname for her.");
MsgDisp("","She's more serious and earnest than
anyone, but whenever I see her, I
just can't help smiling.");
MsgDisp("","That's the kind of girl she is.");
MsgClear();
MsgDisp("主人公","\"I'll plant them next to
｛Mikage＊＊｝'s bulbs.\"");
VoicePlay("Y300700300_07_030");
MsgDisp("Mikage","\"Uh-huh. When they bloom, we can tell
our fortunes based on the color of
the flowers.\"");
MsgDisp("主人公","\"Hehe!
Yes, I look forward to it.\"");
SEPlay("EV_SE_SCHOOL_001");
Wait(60,0);
VoicePlay("Y300700300_07_040");
MsgDisp("Mikage","\"That's the warning bell.
The afternoon lessons are starting.\"");
SEStop("EV_SE_SCHOOL_001",4);
MsgClear();
MsgDisp("","In tulip fortune-telling, each color
has its own meaning in the language
of flowers.");
MsgDisp("","I cheated a little, and gave Miss
Diligent a bulb that would bloom into
pink.");
MsgDisp("","After all, that's the prize for the
ＭＶＰ.");
BGMStop();
MsgClear();
MsgClose();
ScrFadeOut(0);
MsgType(0);
