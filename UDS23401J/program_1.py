from tensorflow.keras import layers, models

model = models.Sequential(
    [
        layers.Input(shape=[10]),
        layers.Dense(32, activation="relu"),
        layers.Dense(1, activation="sigmoid"),
    ]
)

model.summary()
